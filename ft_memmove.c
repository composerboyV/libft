/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:55:48 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:37:59 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	if (a == b || n == '\0')
		return (dest);
	if (dest < src)
	{
		while (n--)
			*a++ = *b++;
	}
	else
	{
		while (n--)
			*(a + n) = *(b + n);
	}
	return (dest);
}
