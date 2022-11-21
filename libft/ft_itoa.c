/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francois <francois@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:15:31 by francois          #+#    #+#             */
/*   Updated: 2022/11/17 18:05:30 by francois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnbr(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	size;
	int	nb;
	char	*str;

	nb = n;
	size = ft_countnbr(nb);
	if (!(str = malloc((size + 1) * sizeof(char))))
		return (NULL);
	str[size] = '\0';
	size--;
	if (n == 0)
	{
		str[0] = '0';
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[size] = '0' + (n % 10);
		n = n / 10;
		size--;
	}
	return (str);
}
