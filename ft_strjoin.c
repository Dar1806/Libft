/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 16:58:53 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/14 11:36:04 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*new;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (lens1 + lens2) + 1);
	if (!new)
		return (0);
	if (s1)
		ft_memcpy(new, s1, lens1);
	if (s2)
		ft_memcpy(new + lens1, s2, lens2);
	new[lens1 + lens2] = '\0';
	return (new);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strjoin(av[1], av[2]));
}
*/
