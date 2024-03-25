/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:38:04 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:39:37 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	a;
	size_t			i;

	i = ft_strlen(src);
	a = 0;
	if (size == 0)
		return (i);
	while (src[a] != '\0' && (a + 1) < size)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (i);
}
