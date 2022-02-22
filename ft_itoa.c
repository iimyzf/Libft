/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:55:04 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:22:11 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_ints(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		i = 1;
		num = num * (-1);
	}
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				fci;
	unsigned int	nb;

	nb = n;
	fci = ft_count_ints(n);
	str = malloc(sizeof(char) * fci + 1);
	if (!str)
		return (NULL);
	str[fci] = '\0';
	fci = fci - 1;
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		nb = n * (-1);
	}
	while (nb)
	{
		str[fci--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (str);
}
