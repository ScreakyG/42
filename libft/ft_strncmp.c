/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:05:33 by francois          #+#    #+#             */
/*   Updated: 2022/11/09 18:34:25 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;
	i = 0;

	while (i < n && (str1[i] != '\0' && str2[i] != '\0'))
	{
		if (str1[i] == str2[i])
			i++;
		else
		{
			return (str1[i] - str2[i]);
		}
	}
	return (str1[i] - str2[i]);
}