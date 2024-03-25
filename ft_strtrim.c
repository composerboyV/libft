/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:39:05 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:40:07 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	j;
	size_t	o;

	o = 0;
	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > i && (ft_strchr(set, s1[j - 1])))
		j--;
	result = (char *) malloc(sizeof(char ) * (j - i + 1));
	if (!(result))
		return (NULL);
	while (i < j)
	{
		result[o++] = s1[i];
		i++;
	}
	result[o] = '\0';
	return (result);
}
