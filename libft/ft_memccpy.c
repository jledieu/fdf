/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 20:54:38 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/30 15:59:29 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	int					i2;
	unsigned char		uc;
	char				*strdst;
	unsigned const char	*strsrc;

	i = 0;
	i2 = 0;
	uc = c;
	strdst = dst;
	strsrc = src;
	while (i < n)
	{
		strdst[i] = strsrc[i];
		if (strsrc[i] == uc)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
