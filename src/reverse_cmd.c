/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:12:48 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/16 18:21:58 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*rra : reverse rotate a - сдвигает вниз все элементы стека a на 1.
			Последний элемент становится первым.
rrb : reverse rotate b - сдвинуть вниз все элементы стека b на 1.
			Последний элемент становится первым.
rrr : rra и rrb одновременно.*/

void	rra(t_var *all, int flag)
{
	if (all->size_a > 1)
		all->a_stack = all->a_stack->prev;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_var *all, int flag)
{
	if (all->size_b > 1)
		all->b_stack = all->b_stack->prev;
	if (flag)
		write(1, "rrb\b", 4);
}

void	rrr(t_var *all, int flag)
{
	if (all->size_a > 1 && all->size_b > 1)
	{
		rra(all, 0);
		rrb(all, 0);
		if (flag)
			write (1, "rrr\n", 4);
	}
}