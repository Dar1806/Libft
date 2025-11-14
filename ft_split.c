/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:43:39 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/14 17:18:15 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isc(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	ft_count(char *s, char c)
{
	int	i;
	int	cmp;

	i = 0;
	cmp = 0;
	while (s[i])
	{
		while (s[i] && ft_isc(s[i], c))
			i++;
		if (s[i] && !ft_isc(s[i], c))
		{
			cmp++;
			while (s[i] && !ft_isc(s[i], c))
				i++;
		}
	}
	return (cmp);
}

char	*ft_stock(char *str, char c)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (!ft_isc(str[i], c) && str[i])
	{
		i++;
		len++;
	}
	dest = malloc(sizeof(char) * len + 1);
	if (!len)
		return (0);
	i = 0;
	while (str[i] && !ft_isc(str[i], c))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		j;

	i = 0;
	j = 0;
	count = ft_count((char *)s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (0);
	while (s[i])
	{
		while (s[i] && ft_isc(s[i], c))
			i++;
		if (s[i] && !ft_isc(s[i], c))
		{
			tab[j] = ft_stock((char *)s + i, c);
			j++;
			while (s[i] && !ft_isc(s[i], c))
				i++;
		}
	}
	tab[j] = '\0';
	return (tab);
}

/*
int	main(int ac, char **av)
{
	char	**tab;
	int		i;

	i = 0;
	tab = ft_split(av[1], av[2][0]);
	if (ac == 3)
	{
		while (tab[i])
			printf("%s\n", tab[i++]);
	}
}
*/
