/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:58:04 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:38:39 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	i = -1;
	result = (char *) malloc(sizeof(char *)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!(result))
		return (NULL);
	*result = 0;
	while (s1[++i] != '\0')
		result[i] = s1[i];
	j = i;
	i = 0;
	while (s2[i] != '\0')
		result[j++] = s2[i++];
	result[j] = '\0';
	return (result);
}
