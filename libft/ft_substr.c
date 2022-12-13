/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:51:26 by francois          #+#    #+#             */
/*   Updated: 2022/12/13 17:39:28 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newchaine;
	size_t	s_len;
	size_t	end;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	end = 0;
	if (start < s_len)
		end = s_len - start;
	if (end > len)
		end = len;
	newchaine = malloc((end + 1) * sizeof(char));
	if (!newchaine)
		return (0);
	if (start > s_len)
		newchaine[0] = '\0';
	else
		ft_strlcpy(newchaine, &s[start], end + 1);
	return (newchaine);
}
