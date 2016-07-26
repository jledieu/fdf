/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:20:09 by jledieu           #+#    #+#             */
/*   Updated: 2015/12/01 13:50:49 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*strs;
	char	cc;

	i = 0;
	strs = (char *)s;
	cc = (char)c;
	while (strs[i] != '\0')
	{
		if (strs[i] == cc)
			return (&strs[i]);
		i++;
	}
	if (cc == '\0')
		return (&strs[i]);
	return (NULL);
}
