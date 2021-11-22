/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:51:56 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/19 14:55:34 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*dst;

	dst = malloc((count) * size);
	if (!dst)
		return (NULL);
	ft_bzero (dst, ft_strlen(dst));
	return ((void *)dst);
}
