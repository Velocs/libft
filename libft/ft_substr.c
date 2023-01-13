/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 00:06:11 by aliburdi          #+#    #+#             */
/*   Updated: 2022/03/16 03:38:38 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	k;
	char			*sub;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= len)
		len = ft_strlen(s);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && k < len)
		{
			sub[k] = s[i];
			k++;
		}
		i++;
	}
	sub[k] = '\0';
	return (sub);
}
