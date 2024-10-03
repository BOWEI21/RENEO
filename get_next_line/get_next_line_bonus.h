/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:25:35 by bchen             #+#    #+#             */
/*   Updated: 2024/10/03 15:13:41 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "unistd.h"
# include "stdlib.h"
# include "fcntl.h"

ssize_t	ft_strlengnl(char *str);
char	*ft_strchrgnl(char *str, int c);
char	*ft_strdupgnl(char *str);
char	*ft_substrgnl(char *str, unsigned int start, ssize_t len);
char	*ft_strjoingnl(char *s1, char *s2);
char	*ft_freegnl(char **str);
char	*ft_line(char *buffer, char **l);
char	*ft_readfile(int fd, char *r);
char	*get_next_line(int fd);

#endif
