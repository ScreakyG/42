/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:56:30 by francois          #+#    #+#             */
/*   Updated: 2022/11/15 20:06:30 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	is_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	size_t	size;
	char	*copy;
	char	*charset;

	if (s1 == 0)
		return (NULL);

	charset = (char *)set;
	j = 0;
	i = 0;
	len = ft_strlen(s1);

	while (is_charset(s1[len - 1], charset) == 1)
	{
		len--;
	}

	while (is_charset(s1[i], charset) == 1)
	{
		i++;
	}

	size = i;

	while (size < len)
	{
		size++;
	}

	if (!(copy = malloc((size + 1) * sizeof(char))))
		return (NULL);
	
	while (i < len)
	{
		copy[j] = s1[i];
		j++;
		i++;
	}
	copy[j] = '\0';
	return (copy);

}

int	main()
{
	char	chaine[] = " b  ";
	char	charset[] = "b ";
	char	*copy;

	copy = ft_strtrim(chaine, charset);
	printf("%s\n", copy);
}
