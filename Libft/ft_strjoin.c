/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:28:10 by bchen             #+#    #+#             */
/*   Updated: 2024/04/22 20:40:00 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ch;
	int		i;
	int		j;
	int		count;

	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	count = 0;
	ch = (char *) malloc (i + j + 1);
	if (ch == NULL)
		return (0);
	while (count < i)
	{
		ch[count] = s1[count];
		count++;
	}
	count = 0;
	while (count < j)
	{
		ch[i + count] = s2[count];
		count++;
	}
	ch[i + count] = '\0';
	return (ch);
}
