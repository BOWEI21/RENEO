/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:49:02 by bchen             #+#    #+#             */
/*   Updated: 2024/07/23 21:03:58 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(char const *string, ...);
int	ft_putchar(char a);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_hexadecimal(unsigned long long n, char c);
int	ft_putptr(uintptr_t n);
int	ft_unsigned(unsigned int n);

#endif
