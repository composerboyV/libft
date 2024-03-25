/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:38:37 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:38:05 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			j;
	unsigned char	*a;

	j = 0;
	a = (unsigned char *)s;
	while (j < n)
	{
		a[j] = c;
		j++;
	}
	return (a);
}
