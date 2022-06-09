/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:26:06 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 18:28:51 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long int nbr, int *bytes)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, bytes);
		ft_puthex(nbr % 16, bytes);
	}
	else if (nbr > 9 && nbr < 16)
		ft_putchar(nbr % 10 + 97, bytes);
	else
		ft_putchar(nbr % 10 + 48, bytes);
	return (*bytes);
}
