/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:46:09 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/30 20:55:58 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			strs[i] = f(i, s[i]);
			i++;
		}
		strs[i] = '\0';
		return (strs);
	}
	return (NULL);
}
