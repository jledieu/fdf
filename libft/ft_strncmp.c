/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:34:09 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/29 18:30:43 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	i = 0;
	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	while ((ucs1[i] != '\0' || ucs2[i] != '\0') && (i < n))
	{
		if (ucs1[i] > ucs2[i] || ucs1[i] < ucs2[i])
			return (ucs1[i] - ucs2[i]);
		i++;
	}
	return (0);
}
