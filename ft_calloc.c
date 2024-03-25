/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:24:41 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/23 16:35:41 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;
	size_t	temp;

	temp = nmemb * size;
	if (nmemb != 0 && (temp / nmemb) != size)
		return (NULL);
	a = malloc(temp);
	if (!a)
		return (NULL);
	ft_memset(a, 0, temp);
	return (a);
}
