# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 09:14:29 by rgeral            #+#    #+#              #
#    Updated: 2021/11/19 13:26:13 by rgeral           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC = ft_tolower.c ft_toupper.c ft_isprint.c ft_strlen.c ft_strlcpy.c\
ft_bzero.c ft_strlcat.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_strnstr.c\
ft_memcpy.c ft_isalnum.c ft_strchr.c ft_isascii.c ft_memset.c ft_memchr.c\
ft_memcmp.c ft_strncmp.c ft_strrchr.c ft_memmove.c ft_strdup.c ft_calloc.c\
ft_atoi.c ft_strjoin.c ft_substr.c ft_split.c ft_strtrim.c ft_strmapi.c\
ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
ft_putstr_fd.c ft_striteri.c\

SRC_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c\

OBJ = $(SRC:.c=.o)
OBJS_B = $(SRC_B:.c=.o)
HEADER_FILE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(HEADER_FILE)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -I. -c $< -o $@

bonus: 	$(OBJ) $(OBJS_B) all
	ar rcs $(NAME) $(OBJ) $(OBJS_B)


clean:
	$(RM) $(OBJ) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus