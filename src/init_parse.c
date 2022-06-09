/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:46:08 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/09 20:48:32 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_var	*init_struct(t_var **arr)
{
	t_var	*all;
	int		i;

	i = 0;
	while (arr[i])
		i++;
	all = malloc(sizeof(t_var));
	if (all == NULL)
		return (NULL);
	all->a_stack = NULL;
	all->b_stack = NULL;
	all->min_a = 1;
	all->size_a = i;
	all->size_b = 0;
	return (all);
}
	