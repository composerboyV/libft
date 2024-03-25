/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 20:08:57 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 17:03:04 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*size;

	i = 0;
	if (start >= ft_strlen(s))
	{
		size = (char *)ft_calloc(1, sizeof(char));
		return (size);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	size = (char *)malloc(sizeof(char) * (len + 1));
	if (!(size))
		return (NULL);
	while (len > 0)
	{
		size[i] = s[i + start];
		len--;
		i++;
	}
	size[i] = '\0';
	return (size);
}
