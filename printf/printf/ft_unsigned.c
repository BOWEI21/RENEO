/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:56:36 by bchen             #+#    #+#             */
/*   Updated: 2024/07/23 20:10:55 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	size;

	size = 0;
	if (n == 0)
		size += ft_putchar('0');
	else
	{
		if (n / 10 != 0)
			ft_unsigned(n / 10);
		ft_putchar((n % 10) + '0');
		while (n > 0)
		{
			n /= 10;
			size++;
		}
	}
	return (size);
}
