/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jledieu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:55:03 by jledieu           #+#    #+#             */
/*   Updated: 2015/11/29 23:53:39 by jledieu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char *zonemem;

	zonemem = (char *)malloc(size * sizeof(zonemem));
	if (zonemem == NULL)
		return (NULL);
	bzero(zonemem, size);
	return (zonemem);
}
