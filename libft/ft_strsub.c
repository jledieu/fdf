/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:35:26 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/30 20:56:56 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	tempstart;
	char			*troncs;

	if (s)
	{
		i = 0;
		tempstart = start;
		troncs = (char *)malloc((len + 1) * sizeof(troncs));
		if (troncs == NULL)
			return (NULL);
		while (i < len)
		{
			troncs[i] = s[tempstart];
			i++;
			tempstart++;
		}
		troncs[i] = '\0';
		return (troncs);
	}
	return (NULL);
}
