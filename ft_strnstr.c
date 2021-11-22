/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:12:24 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/08 19:02:42 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char	*str, char const	*needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == needle[j] && (i + j) < n)
		{
			if (needle[j] == '\0' && str[i + j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
