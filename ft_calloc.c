/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmeunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:43:23 by nmeunier          #+#    #+#             */
/*   Updated: 2025/11/19 08:20:54 by nmeunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*tab;

	total = nmemb * size;
	tab = malloc(sizeof(char) * total);
	if (!tab)
		return (0);
	ft_memset(tab, 0, total);
	return (tab);
}
