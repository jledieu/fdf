/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:26:55 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/29 18:23:26 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ucs;
	unsigned char	ucc;

	i = 0;
	ucs = (unsigned char *)s;
	ucc = (unsigned char)c;
	while (i < n)
	{
		if (ucs[i] == ucc)
			return (&ucs[i]);
		i++;
	}
	return (NULL);
}
