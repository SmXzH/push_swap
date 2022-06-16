/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 20:05:48 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/16 13:54:33 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Creating 2 arrays of intager for non sort and sort 

void	add_to_stack(t_var *all, char **arr)
{
	int		*non_sort;
	int		*sort;
	int		i;
	int		len;
	int		num;

	i = -1;
	len = 0;
	while (arr[++i])
		len++;
	non_sort = malloc(sizeof(int) * (len));
	sort = malloc(sizeof(int) * (len));
	if (!non_sort && !sort)
		return ;
	i = 0;
	while (i < len)
	{
		num = ft_atoi(arr[i]);
		non_sort[i] = num;
		sort[i] = num;
		i++;
	}
	buble_sort(all, sort, non_sort, len);
}

	//   Sortitg array 'sort' With Bubble sorting style
	//  For cheking: We have already sorted array;

void	buble_sort(t_var *all, int *sort, int *non_sort, int len)
{
	int		i;
	int		j;
	int		tmp;
	int		count;

	i = 0;
	count = 0;
	while (i < len)
	{
		j = 0;
		while (j < (len - 1 - i))
		{
			if (sort[j] > sort[j + 1])
			{
				tmp = sort[j + 1];
				sort[j + 1] = sort[j];
				sort[j] = tmp;
				count++;
			}
			j++;
		}
		i++;
	}
	

	create_stack(all, sort, non_sort, len);
}

void	create_stack(t_var *all, int *sort, int *non_sort, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (non_sort[j] == sort[i])
			{
				lstadd_back(&all->a_stack, lstnew(non_sort[i]));
				j++;
				break ;
			}
			j++;
		}
		i++;
	}
	free(non_sort);
	free(sort);
}
