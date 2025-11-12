/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:58:53 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/12 17:48:39 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*new;

	i = 0;
	j = 0;
	new = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	new = (char *)malloc(sizeof(char) * (i + j) + 1);
	if (!new)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i + j] = '\0';
	return (new);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strjoin(av[1], av[2]));
}
*/
