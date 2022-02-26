/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:36:58 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 03:37:12 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	char	*joined;

	if (!s1)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	joined = (char *) malloc(sizeof(char) * (s1len + s2len + 1));
	if (!joined)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		joined[i] = s1[i];
		i++;
	}
	while (i < s1len + s2len)
	{
		joined[i] = s2[i - s1len];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}
