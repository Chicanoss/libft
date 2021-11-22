/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:40:34 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/18 14:35:53 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	*j;

	j = (unsigned char *) pointer;
	i = 0;
	while (i < count)
	{
		j[i] = value;
		i++;
	}
	return (pointer);
}
