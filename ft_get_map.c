/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 00:45:55 by jledieu           #+#    #+#             */
/*   Updated: 2016/03/30 19:14:53 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_check_line(char *line)
{
	int		j;

	j = 0;
	if (ft_strlen(line) <= 0)
		exit(EXIT_FAILURE);
	while (line[j] != '\0')
	{
		if (ft_isdigit(line[j]))
			while (line[j] != ' ' && line[j] != '\0')
				j++;
		if (line[j] == '\0')
			return ;
		if (!(ft_isdigit(line[j]) ||
		(line[j] == '-' && ft_isdigit(line[j + 1])) || line[j] == ' '))
			exit(EXIT_FAILURE);
		j++;
	}
}

char			**ft_get_map(char **argv, t_mlx *e)
{
	int		fd;
	int		nbline;
	char	*line;
	char	*mapjoin;
	char	**map;

	fd = open(argv[1], O_RDONLY);
	nbline = 0;
	mapjoin = "\0";
	e->nbline = 0;
	while (get_next_line(fd, &line) > 0)
	{
		ft_check_line(line);
		mapjoin = ft_strjoin(mapjoin, line);
		mapjoin = ft_strjoin(mapjoin, "\n");
		e->nbline++;
	}
	if (e->nbline == 0)
		exit(EXIT_FAILURE);
	if (get_next_line(fd, &line) == -1)
		exit(EXIT_FAILURE);
	map = ft_strsplit(mapjoin, '\n');
	return (map);
}
