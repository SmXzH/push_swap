/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:14:34 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/09 20:42:45 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_list
{
	int				num;
	int				flag;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_node;

typedef struct var
{
	t_node	*a_stack;
	t_node	*b_stack;
	int		min_a;
	int		med;
	int		max_a;
	int		len_a;
	int		size_a;
	int		size_b;
}	t_var;

#endif