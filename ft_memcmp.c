/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:14:57 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:36:13 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				i;

	i = 0;
	a = s1;
	b = s2;
	if (!n)
		return (0);
	while (*a == *b && i + 1 < n)
	{
		i++;
		a++;
		b++;
	}
	if (*a == *b)
		return (0);
	else
		return (*a - *b);
}
