# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 08:56:05 by pcazac            #+#    #+#              #
#    Updated: 2023/03/30 11:25:00 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
	ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
	ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
	ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c \
	ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c \
	ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
	ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
	ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c

SRO = ft_isprint.o ft_putendl_fd.o ft_strlcat.o ft_substr.o \
	ft_atoi.o ft_itoa.o ft_putnbr_fd.o ft_strlcpy.o ft_tolower.o \
	ft_bzero.o ft_memchr.o ft_putstr_fd.o ft_strlen.o ft_toupper.o \
	ft_calloc.o ft_memcmp.o ft_split.o ft_strmapi.o \
	ft_isalnum.o ft_memcpy.o ft_strchr.o ft_strncmp.o \
	ft_isalpha.o ft_memmove.o ft_strdup.o ft_strnstr.o \
	ft_isascii.o ft_memset.o ft_striteri.o ft_strrchr.o \
	ft_isdigit.o ft_putchar_fd.o ft_strjoin.o ft_strtrim.o 

all: $(NAME)

$(NAME):
	cc -g -c -Wall -Wextra -Werror $(SRC)
	ar rcs $(NAME) $(SRO)

clean:
	/bin/rm -f $(SRO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
