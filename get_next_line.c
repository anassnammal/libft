/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anammal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 14:35:47 by anammal           #+#    #+#             */
/*   Updated: 2022/12/11 14:35:51 by anammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*init(char **rem)
{
	char	*l;

	if (*rem)
	{
		l = ft_strdup(*rem);
		free(*rem);
		*rem = NULL;
	}
	else
		l = ft_strdup("");
	*rem = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (*rem == NULL)
		return (free(l), NULL);
	return (l);
}

static int	check_nl(char *s)
{
	if (s)
	{
		while (*s)
			if (*(s++) == '\n')
				return (0);
		return (1);
	}
	return (0);
}

static char	*readline(char *b, char *l, int fd)
{
	char	*line;
	char	*tmp;
	ssize_t	rd_status;
	size_t	nl_check;

	line = l;
	nl_check = 1;
	while (nl_check)
	{
		ft_bzero(b, BUFFER_SIZE + 1);
		rd_status = read(fd, b, BUFFER_SIZE);
		if (!rd_status)
			break ;
		else if (rd_status == -1)
			return (free(line), NULL);
		tmp = line;
		line = ft_strjoin(line, b);
		free(tmp);
		nl_check = check_nl(line);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buf[1024];
	char		*line;
	char		*ret;
	int			len;

	ret = NULL;
	line = init(&buf[fd]);
	if (line == NULL)
		return (ret);
	line = readline(buf[fd], line, fd);
	free(buf[fd]);
	buf[fd] = NULL;
	if (line)
	{
		len = ft_strdlen(line, '\n') + 1;
		if (*line)
		{
			ret = ft_substr(line, 0, len);
			buf[fd] = ft_substr(line, len, ft_strdlen(line, '\0') - len);
		}
		free(line);
	}
	return (ret);
}
