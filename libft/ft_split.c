/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 23:13:48 by aliburdi          #+#    #+#             */
/*   Updated: 2022/03/18 05:56:59 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			++words;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	list = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!list)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			list[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	list[i] = 0;
	return (list);
}
