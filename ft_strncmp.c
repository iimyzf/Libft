/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 01:22:42 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:18:28 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	i = 0;
	if (n != 0)
	{
		if (c1[0] == '\0' || c2[0] == '\0')
			return (c1[0] - c2[0]);
		while (i < n && (c1[i] || c2[i]))
		{
			if (c1[i] != c2[i])
				return (c1[i] - c2[i]);
			else
				i++;
		}
	}
	return (0);
}
