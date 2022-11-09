/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:47:06 by francois          #+#    #+#             */
/*   Updated: 2022/11/09 15:54:51 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen((char *)str);

	while (i >= 0)
	{
		if (str[i] == c)
			return (char *) &str[i];
		i--;
	}
	return (0);
}