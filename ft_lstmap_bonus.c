/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:39:27 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:59:51 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*result_head;

	if (!lst || !f || !del)
		return (NULL);
	result_head = NULL;
	while (lst)
	{
		result = ft_lstnew((f)(lst -> content));
		if (!result)
		{
			ft_lstclear(&result_head, del);
			return (NULL);
		}
		ft_lstadd_back(&result_head, result);
		lst = lst -> next;
	}
	return (result_head);
}
