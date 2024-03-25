/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:48:15 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:37:51 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*temp;
	unsigned char		*a;
	int					j;

	temp = (unsigned char *)dest;
	a = (unsigned char *)src;
	j = 0;
	while (n--)
	{
		temp[j] = a[j];
		j++;
	}
	return ((void *)temp);
}
