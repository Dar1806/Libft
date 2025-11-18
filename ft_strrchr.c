/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:56:12 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/12 12:03:18 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

/*
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%s\n", ft_strrchr(av[1], atoi(av[2])));
}
*/
