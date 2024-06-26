/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:50:11 by bchen             #+#    #+#             */
/*   Updated: 2024/04/15 20:01:11 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	unsigned char ch = 'n';
	printf("%c", ft_toupper(ch));
	return (0);
}
*/

/*
int	main(void)
{
	char	str[] = "NaYeon";
	for (int i = 0; str[i] != '\0'; i++) 
	{
        str[i] = toupper(str[i]);
    }
    printf("%s\n", str);
    return (0);
}
*/
