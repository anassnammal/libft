NAME = libft
SRC = ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_main.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c
CFLAGS += -Wall -Wextra -Werror -I libft.h
OBJS = $(SRC:.c=.o)
CUR_DIR = $(shell pwd)

all: $(NAME)
	@echo "Compiling..."

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all