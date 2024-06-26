/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:57:10 by bchen             #+#    #+#             */
/*   Updated: 2024/04/17 18:18:10 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str1, char *str2, size_t n)
{
	size_t	i;
	size_t	m;
	size_t	len;
	char	*hay;

	i = 0;
	hay = (char *)str1;
	len = ft_strlen(str2);
	if (len == 0 || str1 == str2)
		return (hay);
	while (hay[i] != '\0' && i < n)
	{
		m = 0;
		while (hay[i + m] != '\0' && str2[m] != '\0'
			&& hay[i + m] == str2[m] && i + m < n)
			m++;
		if (m == len)
			return (hay + i);
		i++;
	}
	return (0);
}
