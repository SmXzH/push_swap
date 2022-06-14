/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:46:08 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/14 16:36:21 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_var	*init_struct(char **arr)
{
	t_var	*all;
	int		i;

	i = 0;
	while (arr[i])
		i++;
	all = malloc(sizeof(t_var));
	if (!all)
		return (NULL);
	all->a_stack = NULL;
	all->b_stack = NULL;
	all->min_a = 1;
	all->med = 0;
	all->size_a = i;
	all->size_b = 0;
	return (all);
}

t_node	*lstnew(int num, int index)
{
	t_node	*lst;

	lst = malloc(sizeof(t_node));
	if (!lst)
		return (NULL);
	lst->flag = 0;
	lst->index = index;
	lst->next = NULL;
	lst->prev = NULL;
	return (lst);
}

void	lstadd_back(t_node **stack_a, t_node *new)
{
	t_node	*tmp;

	if (!new)
		return ;
	tmp = *stack_a;
	if (tmp)
	{
		if (tmp->prev)
		{
			new->next = tmp;
			new->prev = tmp->prev;
			tmp->prev->next = new;
			tmp->prev = new;
		}
		else
		{
			new->next = tmp;
			new->prev = tmp;
			tmp->next = new;
			tmp->prev = new;
		}
	}
	else
		*stack_a = new;
}
