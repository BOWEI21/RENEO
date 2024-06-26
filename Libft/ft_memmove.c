/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:26:02 by bchen             #+#    #+#             */
/*   Updated: 2024/04/15 17:08:04 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (a == 0 && b == 0)
		return (0);
	if (src > dest)
	{
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	}
	while (i < n)
	{
		a[n - 1] = b[n - 1];
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char	s[] = "sbsbsb";
	char	b[] = "qsqsqsqs";
	printf ("%s", ft_memmove(((void *)s), ((void *)b), 5));
}
*/
