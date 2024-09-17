/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:59:17 by bchen             #+#    #+#             */
/*   Updated: 2024/09/17 18:18:52 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_freegnl(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*ft_line(char *buffer, char **l)
{
	char	*r;
	int		i;

	r = NULL;
	i = ft_strlengnl(buffer);
	if (!buffer || !l)
		return (NULL);
	if (ft_strchrgnl(buffer, '\n'))
	{
		r = ft_strdupgnl(ft_strchrgnl(buffer, '\n') + 1);
		(*l) = ft_substrgnl(buffer, 0, i - ft_strlengnl(r));
	}
	else
	{
		(*l) = ft_substrgnl(buffer, 0, i);
	}
	ft_freegnl(&buffer);
	return (r);
}

char	*ft_readfile(int fd, char *r)
{
	ssize_t	readbytes;
	char	*buffer;

	buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	readbytes = 1;
	buffer[0] = '\0';
	while (!ft_strchrgnl(buffer, '\n') && readbytes != 0)
	{
		readbytes = read(fd, buffer, BUFFER_SIZE);
		if (readbytes == -1)
		{
			ft_freegnl(&buffer);
			ft_freegnl(&r);
			return (NULL);
		}
		buffer[readbytes] = '\0';
		if (readbytes > 0)
			r = ft_strjoingnl(r, buffer);
	}
	ft_freegnl(&buffer);
	return (r);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer || !ft_strchrgnl(buffer, '\n'))
		buffer = ft_readfile(fd, buffer);
	if (!buffer)
		return (NULL);
	buffer = ft_line(buffer, &line);
	return (line);
}
