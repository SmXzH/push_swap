/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cmd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:11:17 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/14 22:06:41 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*sa : swap a — поменять местами первые 2 элемента в верхней части стека a.
			Ничего не делать, если есть только один элемент или его нет).
sb : swap b — поменять местами первые 2 элемента в верхней части стека b.
			Ничего не делать, если есть только один элемент или его нет).
ss : sa и sb одновременно.*/
			
void	sa(t_var *all, int flag)
{
	int	tmp;
	
	if (all->size_a < 2)
		return ;
	tmp = all->a_stack->index;
	all->a_stack->index = all->a_stack->next->index;
	all->a_stack->next->index = tmp;
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	sb(t_var *all, int flag)
{
	int	tmp;
	
	if (all->size_b < 2)
		return ;
	tmp = all->b_stack->index;
	all->b_stack->index = all->b_stack->next->index;
	all->b_stack->next->index = tmp;
	if (flag == 1)
		write(1, "sb\n", 3);
}

void	ss(t_var *all)
{
	if (all->size_a > 1 && all->size_b > 1)
		sa(all, 0);
		sb(all, 0);
		write(1,"ss\n", 3);
}