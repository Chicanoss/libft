/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:24:47 by rgeral            #+#    #+#             */
/*   Updated: 2021/11/18 12:33:02 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_new_str(char *str, size_t i, long nb)
{
	while (nb > 0)
	{
		str[i] = '0' + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;
	long	nb;

	nb = n;
	str = malloc((ft_len(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = ft_len(n);
	str[i] = '\0';
	i--;
	if (nb < 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	ft_new_str(str, i, nb);
	return (str);
}
