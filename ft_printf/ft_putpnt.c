/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szhakypo <szhakypo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 16:34:20 by szhakypo          #+#    #+#             */
/*   Updated: 2022/03/21 17:39:16 by szhakypo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpnt(unsigned long long int nbr, int *bytes)
{
	ft_putstr ("0x", bytes);
	ft_puthex (nbr, bytes);
	return (*bytes);
}
