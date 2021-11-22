/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:20:43 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/17 14:49:52 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*str, int c, size_t	n)
{
	size_t	i;
	char	*j;

	if (n == 0)
		return (NULL);
	j = (void *) str;
	i = 0;
	while (i < n)
	{
		if (j[i] == (char)c)
			return (&j[i]);
		i++;
	}
	return (NULL);
}
