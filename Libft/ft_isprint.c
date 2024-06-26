/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <bchen@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:43:01 by bchen             #+#    #+#             */
/*   Updated: 2024/04/11 20:28:16 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	(ft_isprint(int c))
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
