/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:25:22 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 19:01:46 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthub(unsigned long long int nbr, int *bytes)
{
	if (nbr >= 16)
	{
		ft_puthub(nbr / 16, bytes);
		ft_puthub(nbr % 16, bytes);
	}
	else if (nbr > 9 && nbr < 16)
		ft_putchar(nbr % 10 + 65, bytes);
	else
		ft_putchar(nbr % 10 + 48, bytes);
	return (*bytes);
}
