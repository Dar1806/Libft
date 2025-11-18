/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:43:36 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/12 14:36:43 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!(char *)dest && !(char *)src)
		return (0);
	if (src > dest)
		ft_memcpy((char *)dest, (char *)src, n);
	else
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return ((char *)dest);
}

/*
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("fausse fct : %s\n", (char *)ft_memmove(av[1],
			av[2], atoi(av[3])));
		printf("vrai fct :%s\n", (char *)memmove(av[1],
			av[2], atoi(av[3])));
	}
}
*/
