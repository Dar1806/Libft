/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:08:55 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/11 15:25:02 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = (char *)s;
	while (i < n)
	{
		if (s2[i] == (char)c)
			return ((void *)&s2[i]);
		i++;
	}
	return (0);
}

/*
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s\n", (char *)ft_memchr(av[1], atoi(av[2]), atoi(av[3])));
		printf("%s\n", (char *)memchr(av[1], atoi(av[2]), atoi(av[3])));
	}
}
*/
