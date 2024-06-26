/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:06:44 by bchen             #+#    #+#             */
/*   Updated: 2024/04/25 19:21:21 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	num;

	num = n;
	size = count(n);
	if (n < 0)
	{
		num *= -1;
		size++;
	}
	str = (char *)malloc (sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	*(str + size) = 0;
	while (size--)
	{
		*(str + size) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
	{
		*(str + 0) = '-';
	}
	return (str);
}
