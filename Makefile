# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-moha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 11:05:42 by iel-moha          #+#    #+#              #
#    Updated: 2021/12/12 11:28:01 by iel-moha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putaddress.c ft_putchar.c ft_puthexalow.c ft_puthexaup.c ft_putnbr.c ft_putposnbr.c ft_putstr.c
OBJSRC = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJSRC)
	ar -rc $(NAME) $(OBJSRC)

$(OBJSRC): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBJSRC)

fclean: clean
	rm -rf $(NAME)

re: fclean all
