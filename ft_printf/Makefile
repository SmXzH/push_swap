# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 16:52:12 by szhakypo          #+#    #+#              #
#    Updated: 2022/03/21 17:13:53 by szhakypo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = ft_printf.h

SRCS =	ft_printf.c		\
		ft_putchar.c		\
		ft_puthex.c		\
		ft_puthub.c		\
		ft_putnbr.c		\
		ft_putpnt.c		\
		ft_putstr.c		\
		ft_putunbr.c


OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $^

%.o : %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

