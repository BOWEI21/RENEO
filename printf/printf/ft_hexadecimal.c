/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:44:21 by bchen             #+#    #+#             */
/*   Updated: 2024/07/23 21:11:56 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned long long n, char c)
{
	unsigned long long	i;

	i = 0;
	if (n >= 16)
		i += ft_hexadecimal (n / 16, c);
	if (c == 'x')
		i += ft_putchar ("0123456789abcdef"[n % 16]);
	if (c == 'X')
		i += ft_putchar ("0123456789ABCDEF"[n % 16]);
	return (i);
}
