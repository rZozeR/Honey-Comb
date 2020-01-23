#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: buerkan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 15:57:02 by buerkan           #+#    #+#              #
#    Updated: 2020/01/23 18:04:34 by buerkan          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

CODES = ft_strlex.c  ft_strcat.c  ft_strdup.c  ft_strnew.c ft_strjoin.c ft_memalloc.c \
	ft_bzero.c ft_memdel.c ft_strncpy.c ft_strsub.c ft_strchr.c ft_strdel.c ft_strlen.c \
	ft_strlex.c
OBJ = ft_strlex.o  ft_strcat.o  ft_strdup.o  ft_strnew.o ft_strjoin.o ft_memalloc.o \
	ft_bzero.o ft_memdel.o ft_strncpy.o ft_strsub.o ft_strchr.o ft_strdel.o ft_strlen.o \
	ft_strlex.o
INC = ./

all: $(NAME)

$(NAME): $(CODES) libft.h
	@gcc -Wall -Wextra -Werror -I$(INC) -c $(CODES)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
