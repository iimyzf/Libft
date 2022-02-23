/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:26:19 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:43:39 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst1;
	const char	*src1;
	size_t		i;

	dst1 = (char *) dst;
	src1 = (char *) src;
	i = 0;
	if (!dst1 && !src1)
		return (NULL);
	while (dst != src && i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
