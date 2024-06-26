/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:39:03 by bchen             #+#    #+#             */
/*   Updated: 2024/04/18 16:12:19 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	i;

	sign = 1;
	num = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign -2;
		if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
			return (0);
		else
			i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num * sign);
}
/*
int	main()
{
	char	*a = "  12345";
	char	*b = "545";
	char	*c = "----++887";

	printf ("%d\n", ft_atoi(a));
	printf ("%d\n", ft_atoi(b));
	printf ("%d\n", ft_atoi(c));
	return (0);
}
*/
