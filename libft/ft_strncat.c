/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:06:03 by jledieu           #+#    #+#             */
/*   Updated: 2015/12/01 14:03:42 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		lens1;

	i = 0;
	lens1 = ft_strlen(s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[lens1 + i] = s2[i];
		i++;
	}
	s1[lens1 + i] = '\0';
	return (s1);
}
