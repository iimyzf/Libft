/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:09:22 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:19:24 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	slen;

	str = (char *)s;
	slen = ft_strlen(s);
	while (slen > 0)
	{
		if (str[slen] == (char)c)
			return (str + slen);
		slen--;
	}
	if (str[slen] == (char)c)
		return (str);
	return (NULL);
}
