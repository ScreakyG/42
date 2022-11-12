/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:42:33 by francois          #+#    #+#             */
/*   Updated: 2022/11/10 19:58:44 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	char	*ptrdest;
	char	*ptrsrc;
	char	*temp;

	i = 0;
	ptrdest = (char *)dest;
	ptrsrc = (char *)src;

	while (i < n)
	{
		temp[i] = ptrsrc[i];
		i++;	
	}

	i = 0;

	while (i < n)
	{
		ptrdest[i] = temp[i];
		i++;
	}
	return (dest);
}