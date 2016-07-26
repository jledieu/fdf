/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 21:07:51 by jledieu           #+#    #+#             */
/*   Updated: 2015/12/01 13:51:03 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	while (i < size && '\0' != dst[i])
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	i2 = 0;
	while ((i + i2 + 1) < size && src[i2] != '\0')
	{
		dst[i + i2] = src[i2];
		i2++;
	}
	dst[i + i2] = '\0';
	if (i + i2 + 1 == size)
	{
		while (src[i2] != '\0')
			i2++;
	}
	return (i + i2);
}
