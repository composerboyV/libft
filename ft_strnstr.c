/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:49:20 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 17:57:45 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c_big;
	char	*c_little;

	c_big = (char *)big;
	c_little = (char *)little;
	if (*c_little == '\0' || c_big == c_little)
		return ((char *)c_big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (c_big[i + j] == c_little[j] && i + j < len)
		{
			j++;
			if ((c_little[j]) == '\0')
				return ((char *)&c_big[i]);
		}
		i++;
	}
	return (NULL);
}
