/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:45:21 by bchen             #+#    #+#             */
/*   Updated: 2024/04/17 18:32:43 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*a;

	a = (const char *) str;
	i = 0;
	while (i < n)
	{
		if (a[i] == (char) c)
			return ((void *) &a[i]);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	ar [] = "SHFH AHHDHE HSH";
	int		ch = 'F';
	printf("%s", ft_memchr(ar, ch ,6));
	return (0);
}
*/
