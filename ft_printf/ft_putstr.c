/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:10:35 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 18:16:11 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int *bytes)
{
	int	i;

	i = -1;
	if (!str)
		str = "(null)\0";
	while (str[++i])
		ft_putchar (str[i], bytes);
	return (*bytes);
}
