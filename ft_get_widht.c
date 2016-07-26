/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_widht.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/25 00:49:20 by jledieu           #+#    #+#             */
/*   Updated: 2016/03/25 00:49:30 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_get_widht(char **map, int i)
{
	int		j;
	int		compt;

	j = 0;
	compt = 0;
	while (map[i][j] != '\0')
	{
		if (ft_isdigit(map[i][j]) == 1 && ft_isdigit(map[i][j + 1]) != 1)
		{
			compt++;
			while (map[i][j] != ' ' && map[i][j] != '\0')
				j++;
		}
		else
			j++;
	}
	return (compt);
}
