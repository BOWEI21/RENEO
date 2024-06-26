/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:51:54 by bchen             #+#    #+#             */
/*   Updated: 2024/04/16 20:09:44 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
		i++;
	j = i;
	while (j >= 0)
	{
		if (str[j] == (char) c)
			return ((char *) &str[j]);
		else
			j--;
	}
	if ((char) c == '\0')
		return ((char *) &str[i]);
	return (0);
}
/*
int	main(void)
{
	char word [] = "aaaaggaff ba fefrf";
	int	ch = 'b';
	printf("%s", ft_strrchr(word, ch));
	return (0);
}
*/
