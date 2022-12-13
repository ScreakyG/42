/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:52:51 by francois          #+#    #+#             */
/*   Updated: 2022/12/13 17:40:04 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	if (dstsize <= ft_strlen(dest))
		return (dstsize + ft_strlen(src));
	dest_len = ft_strlen(dest);
	while (src[i] && dest_len < (dstsize - 1))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
