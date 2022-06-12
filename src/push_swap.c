/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:14:18 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/12 20:06:33 by szhakypo         ###   ########.fr       */
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
	add_to_stack(all, arr);
}

int	main(int ac, char **av)
{
	t_var	*all;

	if (ac > 1)
	{
		all = ft_parse(av);
	}
	return (0);
}
