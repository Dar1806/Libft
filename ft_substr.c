/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:32:38 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/14 13:48:46 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*subs;
	char	*s1;

	j = 0;
	s1 = (char *)s;
	subs = 0;
	if (!s1)
		return (0);
	if ((int)start >= ft_strlen(s))
	{
		subs = malloc(1);
		if (!subs)
			return (0);
		subs[0] = '\0';
		return (subs);
	}
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (0);
	while (s1[start] && j < len)
		subs[j++] = s1[start++];
	subs[j] = '\0';
	return (subs);
}

/*
int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
}
*/
