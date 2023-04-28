# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anammal <anammal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/09 13:08:18 by anammal           #+#    #+#              #
#    Updated: 2022/10/09 13:08:18 by anammal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC =	$(shell ls ft_*.c | grep -v "bonus.c")
BSRC =	$(shell ls ft_*_bonus.c)
CFLAGS += -Wall -Wextra -Werror
OBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)
R        := $(shell tput -Txterm setaf 1)
G        := $(shell tput -Txterm setaf 2)
Y       := $(shell tput -Txterm setaf 3)

all: $(NAME)
	@echo $(G) "ALL functions are done!"

$(NAME): $(OBJS)
	@ar rcs $@ $(OBJS)

bonus: $(BOBJS)
	@echo $(G) "ALL bonus functions are done!"
	@ar rcs $(NAME) $(BOBJS)

%.o: %.c $(NAME:.a=.h)
	@echo $(Y) Compiling: $< ... Done!
	@cc $(CFLAGS) -c $< \

clean:
	@echo $(R) Cleaned
	@rm -f $(OBJS)
	@rm -f $(BOBJS)

fclean: clean
	@echo $(R) Fully cleaned
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re