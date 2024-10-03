/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:43:04 by bchen             #+#    #+#             */
/*   Updated: 2024/10/03 15:44:04 by bchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "string.h"
#include "stdio.h"

int	main(int argc, char *argv[])
{
	int	c;
	int	fd;
	int	fdb;
	int	fdb2;
	char	*l;
	int	size;

	c = 20;
	fd = open("try3.txt", O_RDONLY);
	fdb = open("try1.txt", O_RDONLY);
	fdb2 = open("try2.txt", O_RDONLY);
	if (argc > 1 && !strcmp("bonus", argv[1]))
	{
		int	file;
		file = 1;
		
		while (--c >= 0)
        {
		if (file == 1)
		{
			l = get_next_line(fdb);
			file++;
		}
		else
		{
			l = get_next_line(fdb2);
			file--;
		}
		if (l)
		{
			size = ft_strlengnl(l);
			write(1, l, size);
		}
		free(l);
	}
	}
	else
	{
		while (--c > 0)
		{
			l = get_next_line(fd);
			if (l)
			{
				size = ft_strlengnl(l);
				write(1, l, size);
			}
			free(l);
			l = NULL;
		}
	}
	close(fd);
	close(fdb);
	close(fdb2);
	return (0);
}
