# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sam <sam@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 17:23:12 by szhakypo          #+#    #+#              #
#    Updated: 2022/06/17 16:13:38 by sam              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRC		= src/add_to_stack.c	src/init_parse.c	src/parse.c		src/push_swap.c		src/swap_cmd.c		src/push_cmd.c	src/reverse_cmd.c 	src/rotade_cmd.c src/sort_min.c					
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