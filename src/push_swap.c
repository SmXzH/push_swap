/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:14:18 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/17 16:54:15 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_var	*ft_parse(char **argv)
{
	t_var	*all;
	char	**str;

	str = get_str(argv);
	check_arg(str);
	repeated_name(str);
	all = init_struct(str);
	add_to_stack(all, str);
	free_arr(str, 0);
	return (all);
}

void	sorting(t_var *all)
{
	// if (sort_true(all))
	// 	free_stack(all);
	// printf("%d\n", all->a_stack->index);
	// printf("%d\n", all->a_stack->next->index);
	// printf("%d\n", all->a_stack->prev->index);
	//printf("-------------------\n");
	sort_three_a(all);
	// printf("%d\n", all->a_stack->index);
	// printf("%d\n", all->a_stack->next->index);
	// printf("%d\n", all->a_stack->prev->index);
	// printf("-------------------\n");
	// printf("%d\n", all->a_stack->num);
	// printf("%d\n", all->a_stack->next->num);
	// printf("%d\n", all->a_stack->prev->num);
}

int	main(int ac, char **av)
{
	t_var	*all;
	
	if (ac > 1)
	{
		all = ft_parse(av);
		sorting(all);

	}
	return (0);
}
