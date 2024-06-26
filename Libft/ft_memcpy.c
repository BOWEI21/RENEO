/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:44:23 by bchen             #+#    #+#             */
/*   Updated: 2024/04/15 15:32:54 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ejem;
	unsigned char	*ejem2;

	i = 0;
	ejem = (unsigned char *) str1;
	ejem2 = (unsigned char *) str2;
	if (ejem2 == 0 && ejem == 0 && n > 0)
		return (0);
	while (i < n)
	{
		ejem[i] = ejem2[i];
		i++;
	}
	return (str1);
}
