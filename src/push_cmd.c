/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:09:17 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/16 13:56:51 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*pa : push a — взять первый элемент в верхней части b и поместить его в
				верхнюю часть a. Ничего не делать, если b пусто.
pb : push b — взять первый элемент в верхней части a и поместить его в
				верхнюю часть b. Ничего не делать, если a пусто.*/

void	push_a(t_var *all)
{
	t_node *tmp;

	tmp = all->b_stack->next;
	all->b_stack->prev->next = all->b_stack->next;
	all->b_stack->next->prev = all->b_stack->prev;
	if (all->a_stack)
	{
		all->b_stack->prev = all->a_stack->prev;
		all->b_stack->next = all->a_stack;
		all->a_stack->prev->next = all->b_stack;
		all->a_stack->prev = all->b_stack;
		all->a_stack = all->b_stack;
	}
	else
	{
		all->a_stack = all->b_stack;
		all->a_stack->next = all->a_stack;
		all->a_stack->prev = all->a_stack;
	}
	all->b_stack = tmp;
}

void	push_b(t_var *all)
{
	t_node	*tmp;
	
	tmp = all->a_stack->next;
	all->a_stack->prev->next = all->b_stack->next;
	all->a_stack->next->prev = all->b_stack->prev;
	if (all->b_stack)
	{
		all->a_stack->prev = all->b_stack->prev;
		all->a_stack->next = all->b_stack;
		all->b_stack->prev->next = all->a_stack;
		all->b_stack->prev = all->a_stack;
		all->b_stack = all->a_stack;
	}
	else
	{
		all->b_stack = all->a_stack;
		all->b_stack->next = all->b_stack;
		all->b_stack->prev = all->b_stack;
	}
	all->a_stack = tmp;
}

void	pa(t_var *all, int flag)
{
	if (all->size_b == 0)
		return ;
	push_a(all);
	if (all->size_b == 1)
		all->b_stack = NULL;
	all->size_a++;
	all->size_b--;
	if(flag)
		write(1, "pa\n", 3);
}

void	pb(t_var *all, int flag)
{
	if (all->size_a == 0)
		return ;
	push_b(all);
	if (all->size_a == 1)
		all->a_stack = NULL;
	all->size_a--;
	all->size_b++;
	if (flag)
		write(1, "pb\n", 3);
}