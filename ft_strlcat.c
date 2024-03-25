/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:25:19 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:39:23 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len > size)
		return (src_len + size);
	i = ft_strlen(dst);
	j = 0;
	while ((src[j] != '\0') && ((j + dst_len + 1) < size))
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
