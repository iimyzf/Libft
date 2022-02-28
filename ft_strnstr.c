/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 01:57:12 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:52:12 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*s;
	size_t	neelen;

	i = 0;
	s = (char *)haystack;
	neelen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (s[i] != '\0' && i + neelen <= len)
	{
		if (ft_strncmp(haystack, needle, neelen) == 0)
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (NULL);
}
