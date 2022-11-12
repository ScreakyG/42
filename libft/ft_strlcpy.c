/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:04:11 by francois          #+#    #+#             */
/*   Updated: 2022/11/12 21:52:48 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	char	*source;
	size_t i;

	source = (char *)src;
	i = 0;

	if (dstsize != 0)
	{
		while (source[i] != '\0' && i < dstsize - 1)
		{
			dest[i] = source[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}