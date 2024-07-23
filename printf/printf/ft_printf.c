/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:08:14 by bchen             #+#    #+#             */
/*   Updated: 2024/07/23 21:10:43 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char *s, va_list arg)
{
	size_t	i;

	i = 0;
	if (*s == 's')
		i += ft_putstr(va_arg(arg, char *));
	else if (*s == 'c')
		i += ft_putchar(va_arg(arg, int));
	else if (*s == 'd')
		i += ft_putnbr(va_arg(arg, int));
	else if (*s == 'i')
		i += ft_putnbr(va_arg(arg, int));
	else if (*s == 'u')
		i += ft_unsigned(va_arg(arg, unsigned int));
	else if (*s == 'x')
		i += ft_hexadecimal(va_arg(arg, unsigned int), 'x');
	else if (*s == 'X')
		i += ft_hexadecimal(va_arg(arg, unsigned int), 'X');
	else if (*s == 'p')
		i += ft_putptr(va_arg(arg, uintptr_t));
	else if (*s == '%')
		i += ft_putchar('%');
	return ((int)i);
}

int	ft_printf(char const *string, ...)
{
	int		c;
	va_list	lst;

	c = 0;
	va_start(lst, string);
	while (*string != '\0')
	{
		if (*string == '%')
		{
			string++;
			c = c + ft_format((char *)string, lst);
			string++;
		}
		else
		{
			c += ft_putchar(*string);
			string++;
		}
	}
	va_end(lst);
	return (c);
}
