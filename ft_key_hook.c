/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 01:55:55 by jledieu           #+#    #+#             */
/*   Updated: 2016/03/29 05:26:25 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void		ft_key_hook_move(int keycode, t_mlx *e)
{
	if (keycode == 124 || keycode == 123)
	{
		e->movex = (keycode == 124) ? e->movex + 20 : e->movex - 20;
		mlx_clear_window(e->mlx, e->win);
		ft_put_pixel(e);
	}
	if (keycode == 125 || keycode == 126)
	{
		e->movey = (keycode == 125) ? e->movey + 20 : e->movey - 20;
		mlx_clear_window(e->mlx, e->win);
		ft_put_pixel(e);
	}
}

int				ft_key_hook(int keycode, t_mlx *e)
{
	ft_key_hook_move(keycode, e);
	if (keycode == 78 || keycode == 69)
	{
		e->zoom = (keycode == 78) ? e->zoom - 2 : e->zoom + 2;
		e->zoom = (e->zoom <= 0) ? 0 : e->zoom;
		mlx_clear_window(e->mlx, e->win);
		ft_put_pixel(e);
	}
	if (keycode == 116 || keycode == 121)
	{
		e->alti = (keycode == 116) ? e->alti + 1 : e->alti - 1;
		mlx_clear_window(e->mlx, e->win);
		ft_getmap_xy(e, 0, 0, 0);
		ft_put_pixel(e);
	}
	if (keycode == 53)
	{
		mlx_destroy_window(e->mlx, e->win);
		exit(EXIT_FAILURE);
	}
	return (0);
}
