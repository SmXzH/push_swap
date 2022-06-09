/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:28:34 by szhakypo          #+#    #+#             */
/*   Updated: 2022/06/09 20:22:45 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Write Error and exit from progrram

void	error(void)
{
	write(1, "Error", 1);
	exit (0);
}

// Dellite array

void	free_arr(char **arr, int flag)
{
	int	i;

	i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
	if (flag)
		error();
}

//Check: Valid arguments

void	check_arg(char **arr)
{
	int			i;
	int			j;
	long long	num;

	i = -1;
	while (arr[++i])
	{
		j = 0;
		while (arr[i][j])
		{
			if (arr[i][j] == '-')
				j++;
			if (!(ft_isdigit(arr[i][j])))
				free_arr(arr, 1);
			j++;
		}
		num = ft_atoi(arr[i]);
		if (num > MAX_INT || num < MIN_INT)
			free_arr(arr, 1);
	}
}

//Geting from 2Darray str;

char	**get_str(char **av)
{
	int		i;
	char	*line;
	char	*tmp;
	char	**arr;

	line = ft_strdup(av[1]);
	i = 1;
	while (av[++i])
	{
		tmp = line;
		line = ft_strjoin(line, " ");
		free(tmp);
		tmp = line;
		line = ft_strjoin(line, av[i]);
		free(tmp);
	}
	arr = ft_split(line, ' ');
	free(line);
	return (arr);
}

//checking: Same Numbers?

void	repeated_name(char **arr)
{
	int		i;
	int		j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (ft_atoi(arr[i]) == ft_atoi(arr[j]))
				free_arr(arr, 1);
			j++;
		}
		i++;
	}
}
