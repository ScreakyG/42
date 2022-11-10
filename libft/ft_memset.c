/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:46:47 by francois          #+#    #+#             */
/*   Updated: 2022/11/10 15:05:57 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;
	size_t i;

	i = 0;
	ptr = (char *)str;

	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}