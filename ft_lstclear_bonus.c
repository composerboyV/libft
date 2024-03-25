/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:50:53 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:37:15 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*j;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		j = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = j;
	}
	*lst = NULL;
}
