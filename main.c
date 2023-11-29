/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <gsoteldo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:20:42 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/11/29 20:27:33 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("100lineas.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		write (1, line, ft_strlen (line));
		free (line);
		/*
		line = get_next_line(fd);
		printf("%s\n", line);
		*/
		//i++;
	}
	return (0);
}
