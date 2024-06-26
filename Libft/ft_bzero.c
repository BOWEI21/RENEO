/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:35:08 by bchen             #+#    #+#             */
/*   Updated: 2024/04/15 14:40:39 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t c)
{
	unsigned char	*x;

	x = (unsigned char *)s;
	while (c > 0)
	{
		*x = 0;
		c--;
		x++;
	}
}
/*
int	main(void)
{
	char ejem[] = "HOLAAAA";
	ft_bzero(ejem, 3);
	return (0);
}
*/
