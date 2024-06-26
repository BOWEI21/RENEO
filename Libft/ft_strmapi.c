/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:43:15 by bchen             #+#    #+#             */
/*   Updated: 2024/04/30 17:27:39 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	j;
	unsigned int	i;
	char			*result;

	if (s == NULL || f == NULL)
		return (NULL);
	j = 0;
	while (s[j] != '\0')
		j++;
	result = (char *)malloc(j + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < j)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[j] = '\0';
	return (result);
}
