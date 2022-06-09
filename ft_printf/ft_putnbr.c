/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:19:16 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 17:15:07 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int *bytes)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", bytes);
	else if (n < 0)
	{
		ft_putchar('-', bytes);
		ft_putnbr(-n, bytes);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, bytes);
		ft_putnbr(n % 10, bytes);
	}
	else
		ft_putchar(n + 48, bytes);
	return (*bytes);
}
