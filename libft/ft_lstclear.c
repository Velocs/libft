/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliburdi <aliburdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 02:24:39 by aliburdi          #+#    #+#             */
/*   Updated: 2022/03/25 19:24:45 by aliburdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*addio;

	if (lst && del && *lst)
	{
		while (lst && *lst)
		{
			addio = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = addio;
		}
		*lst = NULL;
	}
}
