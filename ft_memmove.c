/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:46:53 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:44:20 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	const unsigned char	*src1;
	size_t				i;

	dst1 = (unsigned char *) dst;
	src1 = (unsigned char *) src;
	i = 0;
	if (!dst1 && !src1)
		return (NULL);
	if (dst1 > src1)
	{
		while (i < len--)
			dst1[len] = src1[len];
	}
	else
		ft_memcpy(dst1, src1, len);
	return (dst);
}
