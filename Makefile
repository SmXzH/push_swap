# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 17:23:12 by szhakypo          #+#    #+#              #
#    Updated: 2022/06/14 22:27:50 by szhakypo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRC		= src/add_to_stack.c	src/init_parse.c	src/parse.c		src/push_swap.c		src/swap_cmd.c

CC		= gcc

OBJ		= $(SRC:%.c=%.o)

LIB		= libft/libft.a

INCLUDE	= include/

HEADER	= push_swap.h

FLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

all : libft $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME)

%.o : %.c $(INCLUDE)$(HEADER)
	$(CC) $(FLAGS)  -c $< -o $@ -I $(INCLUDE)

clean :
	@$(RM) $(OBJ)
	@$(MAKE) -C libft/ clean

fclean : clean
	@$(MAKE) -C libft/ fclean
	@$(RM) $(NAME) 

re : fclean all

.PHONY:		all	clean	fclean	re	bonus	libft