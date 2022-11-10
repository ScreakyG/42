/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:37:49 by francois          #+#    #+#             */
/*   Updated: 2022/11/10 14:55:22 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	resultat;

	i = 0;
	signe = 1;
	resultat = 0;

	while (nptr[i] == 32 || nptr[i] == 13 || nptr[i] == 9)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signe *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		resultat *= 10;
		resultat += nptr[i] - '0';
		i++;
	}
	return (resultat * signe);	
}