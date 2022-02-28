/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:40:23 by yagnaou           #+#    #+#             */
/*   Updated: 2021/11/28 02:36:11 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_beg(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

int	check_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (len > 0 && set[i])
	{
		if (s1[len] == set[i])
		{
			len--;
			i = -1;
		}
		i++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		beg;
	int		end;
	char	*trimmed;
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	beg = check_beg(s1, set);
	end = check_end(s1, set);
	if (beg > end)
		return (ft_strdup(""));
	trimmed = (char *) malloc((end - beg + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (beg <= end && *s1)
		trimmed[i++] = s1[beg++];
	trimmed[i] = '\0';
	return (trimmed);
}
