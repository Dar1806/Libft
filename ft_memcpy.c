/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:15:52 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/11 14:43:46 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <string.h>
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s\n", (char *)ft_memcpy(av[1], av[2], atoi(av[3])));
		printf("%s\n", (char *)memcpy(av[1], av[2], atoi(av[3])));
	}
		
}
*/
