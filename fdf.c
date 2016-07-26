/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 15:38:36 by jledieu           #+#    #+#             */
/*   Updated: 2016/03/29 05:30:15 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_init_structmlx(t_mlx *e)
{
	e->xwin = 2500;
	e->ywin = 1250;
	e->zoom = 20;
	e->movex = 0;
	e->movey = 0;
	e->alti = 0;
}

int				main(int argc, char **argv)
{
	t_mlx	e;

	if (argc == 2)
	{
		e.map = ft_get_map(argv, &e);
		ft_init_structmlx(&e);
		ft_getmap_xy(&e, 0, 0, 0);
		e.mlx = mlx_init();
		e.win = mlx_new_window(e.mlx, e.xwin, e.ywin, "FDF");
		ft_put_pixel(&e);
		mlx_hook(e.win, 2, 0, ft_key_hook, &e);
		mlx_loop(e.mlx);
	}
	return (0);
}
