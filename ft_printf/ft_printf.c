/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:29:45 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 18:57:52 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chooser(const char *str, va_list ag, int *bytes)
{
	if (*str == 'c')
		ft_putchar(va_arg(ag, int), bytes);
	if (*str == 's')
		ft_putstr(va_arg(ag, char *), bytes);
	if (*str == 'd' || *str == 'i')
		ft_putnbr(va_arg(ag, int), bytes);
	if (*str == 'u')
		ft_putunbr(va_arg(ag, unsigned int), bytes);
	if (*str == 'x')
		ft_puthex((unsigned int) va_arg(ag, unsigned long long int), bytes);
	if (*str == 'X')
		ft_puthub((unsigned int) va_arg(ag, unsigned long long int), bytes);
	if (*str == 'p')
		ft_putpnt(va_arg(ag, unsigned long long int), bytes);
	if (*str == '%')
		ft_putchar('%', bytes);
	return (*bytes);
}

int	ft_printf(const char *str, ...)
{
	int		bytes;
	va_list	ag;

	bytes = 0;
	va_start(ag, str);
	while (*str)
	{
		if (*str == '%')
			bytes = ft_chooser(++str, ag, &bytes);
		else
			ft_putchar(*str, &bytes);
		str++;
	}
	va_end(ag);
	return (bytes);
}
