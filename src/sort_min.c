/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:51:54 by sam               #+#    #+#             */
/*   Updated: 2022/06/17 16:43:20 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sort_true(t_var *all)
{
    int     i;
    t_node  *head;
    
    i = all->size_a - 1;
    head = all->a_stack;
    while (i-- > 0)
    {
        if (head->index > head->next->index)
            return (0);
        head = head->next;
    }
    return (1);
}

void	sort_three_a(t_var *all)
{
	int	a;
	int	b;
	int	c;

	a = all->a_stack->index;
	b = all->a_stack->next->index;
	c = all->a_stack->prev->index;
	if (b > a && b > c)
		rra(all, 1);
	else if (a > b && a > c)
		ra(all, 1);
	a = all->a_stack->index;
	b = all->a_stack->next->index;
	if (a > b)
		sa(all, 1);
}