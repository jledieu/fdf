/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:48:49 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/30 20:55:12 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		i2;
	int		lens1;
	char	*str;

	if (s1 && s2)
	{
		i = 0;
		i2 = 0;
		lens1 = ft_strlen(s1);
		str = (char *)malloc(((lens1 + ft_strlen(s2)) + 1) * sizeof(str));
		if (str == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[i2] != '\0')
			str[i++] = s2[i2++];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
