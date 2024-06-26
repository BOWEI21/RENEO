/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:26:19 by bchen             #+#    #+#             */
/*   Updated: 2024/04/22 19:26:14 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*ch;

	i = 0;
	j = 0;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ch = (char *) malloc ((len + 1));
	if (ch == NULL)
		return (0);
	while (j < len)
	{
		ch[i] = s[start + i];
		i++;
		j++;
	}
	ch[i] = '\0';
	return (ch);
}
/*
int	main(void)
{
	char const	str [] = "Pablito tiene un palito";
	unsigned int	s = 17;
	unsigned int	l = 6;
	printf("%s", ft_substr(str, s, l));
	return (0);
}
*/
