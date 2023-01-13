/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:13:44 by aliburdi          #+#    #+#             */
/*   Updated: 2022/03/15 23:34:23 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	char	*copy;

	i = ft_strlen(src) + 1;
	copy = malloc(i * sizeof(char));
	if (!copy)
		return (0);
	copy = ft_memcpy(copy, src, i);
	return (copy);
}
