/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:48:50 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/25 17:07:27 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	size_t	i;
	char	*str;

	i = 0;
	s1len = ft_strlen(s1);
	str = (char *) malloc(sizeof(char) * s1len + 1);
	if (!str)
		return (NULL);
	while (s1[i] && i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
