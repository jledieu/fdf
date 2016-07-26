/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:34:16 by jledieu           #+#    #+#             */
/*   Updated: 2015/12/01 12:55:52 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*strs;
	char	cc;
	char	*fin;

	i = 0;
	strs = (char *)s;
	cc = (char)c;
	fin = NULL;
	while (s[i] != '\0')
	{
		if (strs[i] == cc)
			fin = &strs[i];
		i++;
	}
	if (cc == '\0')
		return (&strs[i]);
	return (fin);
}
