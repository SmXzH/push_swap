/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotade_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:59:49 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/16 18:12:24 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*ra : rotate a - сдвигает вверх все элементы стека a на 1.
			Первый элемент становится последним.
rb : rotate b - сдвинуть вверх все элементы стека b на 1.
			Первый элемент становится последним.
rr : ra и rb одновременно.*/

void	ra(t_var *all, int flag)
{
	if (all->size_a > 1)
		all->a_stack = all->a_stack->next;
	if (flag)
		write(1,"ra\n", 3);
}

void	rb(t_var *all, int flag)
{
	if (all->size_b > 1)
		all->b_stack = all->a_stack->next;
	if (flag)
	write (1, "rb\n", 3);
}

void	rr(t_var *all, int flag)
{
	if(all->size_a > 1 && all->size_b > 1)
	{
		ra(all, 0);
		rb(all, 0);
		if (flag)
			write (1, "rr\n", 3);
	}		
}