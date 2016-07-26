/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:57:11 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/29 18:31:26 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	i2;
	size_t	lens2;
	char	*strs1;

	i = 0;
	i2 = 0;
	lens2 = ft_strlen(s2);
	strs1 = (char *)s1;
	if (ft_strlen(strs1) == 0 && lens2 == 0)
		return (strs1);
	while (strs1[i] != '\0')
	{
		i2 = 0;
		while ((strs1[i] == s2[i2]) && s2[i2] != '\0')
		{
			i++;
			i2++;
		}
		if (i2 == lens2)
			return (&strs1[i - i2]);
		i++;
		i = i - i2;
	}
	return (NULL);
}
