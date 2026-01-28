/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:48:40 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/19 09:08:34 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countt(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		sign;
	int		len;
	char	*str;

	sign = 0;
	nbr = (long)n;
	if (nbr < 0)
	{
		sign = 1;
		nbr = -nbr;
	}
	len = ft_countt(nbr) + sign;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len-- > sign)
	{
		str[len] = '0' + (nbr % 10);
		nbr = nbr / 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
