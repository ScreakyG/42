/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:21:01 by francois          #+#    #+#             */
/*   Updated: 2022/11/15 03:45:37 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	is_spacer(char str, char c)
{
	if (str == c)
		return (1);
	if (str == '\0')
		return (0);
	return (0);
}

char	*filltab(const char *str, char c, char *tab)
{
	int	i;

	i = 0;

	while (str[i] != '\0' && (is_spacer(str[i], c) == 0))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**filltabtab(const char *str, char c, char **tabtab)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;

	while (str[i] != '\0' && (is_spacer(str[i], c) == 1))
		i++;
	
	while (str[i] != '\0')
	{
		if (is_spacer(str[i], c) == 1)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != '\0' && is_spacer(str[i + j], c) == 0)
			{
				j++;
			}
			tabtab[index] = malloc ((j + 1) * sizeof(char));
			tabtab[index] = filltab(&str[i], c, tabtab[index]);
			index++;
			i = i + j;
		}
	}
	return (tabtab);
}

int	nbmots(char const *str, char c)
{
	int	i;
	int	mots;

	i = 0;
	mots = 0;

	while (str[i] != '\0' && (is_spacer(str[i], c) == 1))
		i++;
	while (str[i] != '\0')
	{
		if ((is_spacer(str[i], c) == 1) && (is_spacer(str[i + 1], c) == 0))
			mots++;
		i++;
	}
	 if (str[i] == '\0' && str[i - 1] != c)
    	mots++;
	return (mots);
}

char	**ft_split(char const *s, char c)
{
	char	**tabtab;

	int mots;

	mots = nbmots(s, c);
	tabtab = malloc((mots + 1) * sizeof(char *));
	tabtab[mots] = '\0';
	tabtab = filltabtab(s, c, tabtab);
	
	return (tabtab);
}

int	main()
{
	char	**tabtab;
	char	str[] = "Salut c'est cool";
	char	ch = ' ';

	tabtab = ft_split(str, ch);
	printf ("%s\n", tabtab[0]);
	printf ("%s\n", tabtab[1]);
	printf ("%s\n", tabtab[2]);
	if (tabtab[3] != 1)
		printf ("%s\n", tabtab[2]);


}