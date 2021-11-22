/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:17:08 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/17 14:48:18 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	size)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*k;

	if (dest == src)
		return (dest);
	i = 0;
	j = (unsigned char *)dest;
	k = (unsigned char *)src;
	while (i < size)
	{
		j[i] = k[i];
		i++;
	}
	return (dest);
}
