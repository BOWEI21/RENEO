/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:39:34 by bchen             #+#    #+#             */
/*   Updated: 2024/04/12 18:02:54 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		a[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char pal[] = "HOLAAAAAAA";
	printf("%s", ft_memset(pal, '*', 8));
	return (0);
}
*/
