# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 08:56:05 by pcazac            #+#    #+#              #
#    Updated: 2023/11/09 15:03:32 by pcazac           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS := ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c \
	ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
	ft_bzero.c ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c \
	ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c \
	ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c \
	ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
	ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
	ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c \
	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
	ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
	ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJ_DIR := obj
SRC_DIR := src

OBJ := $(SRCS:%.c=$(OBJ_DIR)/%.o)

CC= cc
CFLAGS= -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Building $@..."
	@ar rcs $@ $^
	@echo "$@ built successfully."

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up object files..."
	@/bin/rm -f $(OBJ)

fclean: clean
	@echo "Cleaning up $(NAME)"
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re