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
BSRC =	$(shell ls ft_*.c)
CFLAGS += -Wall -Wextra -Werror -I libft.h
OBJS = $(SRC:.c=.o)
BOBJS = $(BSRC:.c=.o)
R        := $(shell tput -Txterm setaf 1)
G        := $(shell tput -Txterm setaf 2)
Y       := $(shell tput -Txterm setaf 3)

all: $(NAME)
	@echo $(G) "ALL functions are done!"

$(NAME): $(OBJS)
	@ar rc $@ $(OBJS)

bonus: all $(BOBJS)
	@echo $(G) "ALL bonus functions are done!"

%.o: %.c 
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
	@echo $(R) re...
