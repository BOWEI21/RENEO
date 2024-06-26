/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:11:47 by bchen             #+#    #+#             */
/*   Updated: 2024/04/15 19:32:56 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *des, const char *src, size_t n)
{
	size_t		w;
	size_t		e;
	const char	*s;

	if ((!des || !src) && !n)
		return (0);
	s = src;
	w = 0;
	while (*(des + w) && w < n)
		w++;
	if (w < n)
		e = w + ft_strlen(s);
	else
		return (n + ft_strlen(s));
	while (*s && (w + 1) < n)
	{
		*(des + w) = *s++;
		w++;
	}
	*(des + w) = '\0';
	return (e);
}
