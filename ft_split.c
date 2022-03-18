/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:59:24 by yagnaou           #+#    #+#             */
/*   Updated: 2022/02/22 17:20:44 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (c)
	{
		while (s[i] != '\0')
		{
			if (s[i] != c)
				res++;
			while (s[i] != c && s[i] != '\0')
				i++;
			while (s[i] == c)
				i++;
		}
	}
	else
		res = 0;
	return (res);
}

int	words_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			tab[i] = ft_substr(s, 0, words_len(s, c));
			s = s + words_len(s, c);
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
