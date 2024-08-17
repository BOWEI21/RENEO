/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:28:25 by bchen             #+#    #+#             */
/*   Updated: 2024/08/17 19:26:11 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t	ft_strlengnl(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchargnl(char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == (char) c)
			return ((char *) &str[i]);
	if (str[i] == (char) c)
		return ((char *) &dtr[i]);
	return (NULL);
}

char	*ft_substrgnl(char *str, unsigned int start, ssize_t len)
{
	char	*sub;
	ssize_t	i;

	i = -1;
	if (start >= ft_strlengnl(str))
		return (NULL);
	if (len + start > ft_strlengnl(str))
		len = ft_strlengnl(str) - start;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (++i < len)
		sub[i] = str[i + start];
	sub [i] = '\0';
	return (sub);
}
