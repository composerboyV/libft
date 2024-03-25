/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:41:36 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:36:22 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*a;
	int			b;
	size_t		i;

	a = s;
	b = c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
