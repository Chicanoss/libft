/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 11:03:32 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/18 16:05:23 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_start(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	j;
	size_t	is_in_word;

	is_in_word = 0;
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				is_in_word = 1;
			}
			j++;
		}
		if (is_in_word == 0)
			return (i);
		is_in_word = 0;
		i++;
		j = 0;
	}
	return (0);
}

size_t	ft_end(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	j;
	size_t	is_in_word;

	is_in_word = 1;
	i = ft_strlen(s1);
	j = ft_strlen(set);
	while (i > 0)
	{
		while (set[j])
		{
			if (set[j] == s1[i])
				is_in_word = 1;
			j++;
		}
		if (is_in_word == 0)
			return (i + 1);
		i--;
		is_in_word = 0;
		j = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	new_str = malloc((end - start + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (start < end)
	{
		new_str[i] = s1[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
