/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:14:34 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/17 16:38:19 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"


# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_lst
{
	int				num;
	int				flag;
	int				index;
	struct s_lst	*next;
	struct s_lst	*prev;
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

void	add_to_stack(t_var *all, char **arr);
void	buble_sort(t_var *all, int *sort, int *non_sort, int len);
void	create_stack(t_var *all, int *sort, int *non_sort, int len);
void	lstadd_back(t_node **stack_a, t_node *new);
void	error(void);
void	free_arr(char **arr, int flag);
void	check_arg(char **arr);
void	repeated_name(char **arr);
void	free_stack(t_var *all);
void	sort_three_a(t_var *all);
char	**get_str(char **av);
int 	sort_true(t_var *all);
t_var	*init_struct(char **arr);
t_node	*lstnew(int num, int index);
t_var	*ft_parse(char **argv);

// instruction

void	sa(t_var *all, int flag);
void	sb(t_var *all, int flag);
void	ss(t_var *all);
void	pa(t_var *all, int flag);
void	pb(t_var *all, int flag);
void	push_a(t_var *all);
void	push_b(t_var *all);
void	rra(t_var *all, int flag);
void	rrb(t_var *all, int flag);
void	rrr(t_var *all, int flag);
void	rb(t_var *all, int flag);
void	ra(t_var *all, int flag);
void	rr(t_var *all, int flag);

# endif