/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:29:57 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 16:46:30 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_chooser(const char *str, va_list ag, int *bytes);
int	ft_putchar(char str, int *bytes);
int	ft_putstr(char *str, int *bytes);
int	ft_putnbr(int nbr, int *bytes);
int	ft_putunbr(unsigned int nbr, int *bytes);
int	ft_puthub(unsigned long long int nbr, int *bytes);
int	ft_puthex(unsigned long long int nbr, int *bytes);
int	ft_putpnt(unsigned long long int nbr, int *bytes);

#endif
