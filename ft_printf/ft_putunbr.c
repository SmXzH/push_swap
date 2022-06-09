/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:36:46 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 17:43:19 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nbr, int *bytes)
{
	if (nbr > 9)
	{
		ft_putunbr (nbr / 10, bytes);
		ft_putunbr (nbr % 10, bytes);
	}
	else
		ft_putchar (nbr + 48, bytes);
	return (*bytes);
}
