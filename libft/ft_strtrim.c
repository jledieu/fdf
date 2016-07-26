/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <jledieu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:04:33 by jledieu           #+#    #+#             */
/*   Updated: 2016/03/24 20:05:16 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		deb;
	int		fin;
	char	*strs;

	i = 0;
	deb = 0;
	if (!s)
		return (NULL);
	fin = ft_strlen(s);
	while ((s[deb] == ' ' || s[deb] == '\n' || s[deb] == '\t') && deb < fin)
		deb++;
	fin = fin - 1;
	while ((s[fin] == ' ' || s[fin] == '\n' || s[fin] == '\t') && fin >= deb)
		fin--;
	strs = (char *)malloc(((fin - deb) + 1) * sizeof(strs));
	if (strs == NULL)
		return (NULL);
	while (deb <= fin)
		strs[i++] = s[deb++];
	strs[i] = '\0';
	return (strs);
}
