/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:12:50 by bchen             #+#    #+#             */
/*   Updated: 2024/04/16 18:55:03 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == (char) c)
			return ((char *) &src[i]);
		else
			i++;
	}
	if ((char) c == '\0')
		return ((char *) &src[i]);
	return (0);
}
/*
int	main(void)
{
	char	try [] = "aaaaabaaabaa";
	int		ch = 'b';
	printf("%s", ft_strchr(try, ch));
	return (0);
}
*/
