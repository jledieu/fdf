/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:59:15 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/29 18:27:16 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	i = 0;
	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	while (ucs1[i] != '\0' || ucs2[i] != '\0')
	{
		if (ucs1[i] > ucs2[i] || ucs1[i] < ucs2[i])
			return (ucs1[i] - ucs2[i]);
		i++;
	}
	return (0);
}
