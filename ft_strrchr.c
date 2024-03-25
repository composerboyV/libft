/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:13:42 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:40:03 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*sc;

	sc = 0;
	while (*s)
	{
		if (*s == c)
			sc = s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return ((char *)sc);
}
