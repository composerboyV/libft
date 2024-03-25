/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:21:02 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 16:18:51 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_src;
	int		i;

	i = ft_strlen(s);
	new_src = (char *)malloc(sizeof(char) * (i + 1));
	if (!(new_src))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_src[i] = s[i];
		i++;
	}
	new_src[i] = '\0';
	return (new_src);
}
