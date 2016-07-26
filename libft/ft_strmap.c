/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:12:54 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/30 16:28:48 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*strs;
	size_t	lens;

	if (s && f)
	{
		i = 0;
		lens = ft_strlen(s);
		strs = (char *)malloc((lens + 1) * sizeof(*strs));
		if (strs == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			strs[i] = f(s[i]);
			i++;
		}
		return (strs);
	}
	return (NULL);
}
