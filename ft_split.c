/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:47:19 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:52:24 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i] != 0)
		free(result[i++]);
	free(result);
}

static size_t	ft_count(char const *len, char a)
{
	size_t	ct;

	ct = 0;
	while (*len)
	{
		if (*len == a)
			len++;
		else
		{
			ct++;
			while (*len != a && *len)
				len++;
		}
	}
	return (ct);
}

static int	ft_find(char const *tring, char c, char **result, int i)
{
	size_t	len;

	while (*tring)
	{
		if (*tring == c)
			tring++;
		else
		{
			len = 0;
			while ((tring[len] != 0) && (tring[len] != c))
				len++;
			result[i] = (char *)ft_calloc(sizeof(char *)
					* len + 1, sizeof(char));
			if (!(result[i]))
			{
				ft_free(result);
				return (-1);
			}
			ft_strlcpy (result[i++], tring, len + 1);
			while ((*tring != 0) && *tring != c)
				tring++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	len;

	len = ft_count(s, c);
	result = (char **)ft_calloc(sizeof(char *) * (len + 1), sizeof(char));
	if (!(result))
		return (NULL);
	if ((ft_find(s, c, result, 0)) == -1)
		return (NULL);
	return (result);
}
