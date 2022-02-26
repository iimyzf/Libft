/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:03:09 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:56:18 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	odl;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	odl = dstlen;
	if (dstsize >= dstlen)
	{
		while (src[i] && dstlen + 1 < dstsize)
		{
			dst[dstlen] = src[i];
			dstlen++;
			i++;
		}
		dst[dstlen] = '\0';
	}
	if (dstsize <= odl)
		return (dstsize + srclen);
	return (odl + srclen);
}
