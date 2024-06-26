/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:49:46 by bchen             #+#    #+#             */
/*   Updated: 2024/04/16 21:10:05 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1 [i] || str2 [i]))
	{
		if (str1[i] != str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1 [] = "Pedrosssssss";
	char	s2 [] = "Pedrofgfe";
	size_t	n = 7;
	printf("%d", ft_strncmp(s1, s2, 6));
	return (0);
}
*/
