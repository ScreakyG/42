/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:52:51 by francois          #+#    #+#             */
/*   Updated: 2022/11/15 01:04:10 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	char	*ptrsrc;

	ptrsrc = (char *)src;
	i = 0;
	j = 0;

	while (dest[i] != '\0' && i < dstsize)
	{
		i++;
	}

	while (ptrsrc[j] != '\0' && (i + j) < (dstsize - 1))
	{
		dest[i + j] = ptrsrc[j];
		j++;
	}
	if (i != dstsize)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}