/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:42:33 by francois          #+#    #+#             */
/*   Updated: 2022/11/21 18:27:02 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptrdest;
	char	*ptrsrc;

	i = 0;
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			ptrdest[n - 1] = ptrsrc[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}
