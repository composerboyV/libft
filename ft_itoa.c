/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:55:04 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:35:04 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*minusvalue(char *a, long int b, long int c)
{
	int	y;

	c *= -1;
	y = b;
	a[0] = '-';
	while (c)
	{
		*(a + b - 1) = (c % 10) + '0';
		c = (c / 10);
		b--;
	}
	a[y] = '\0';
	return ((void *)a);
}

static void	*value(char *j, long int th, long int m)
{
	int	k;

	k = th;
	if (m == 0)
	{	
		j[0] = '0';
		j[1] = '\0';
		return ((void *)j);
	}
	while (m)
	{
		*(j + th - 1) = (m % 10) + '0';
		m = (m / 10);
		th--;
	}
	j[k] = '\0';
	return ((void *)j);
}

char	*ft_itoa(int n)
{
	long int	a;
	int			len;
	char		*result;

	a = (long int)n;
	len = 0;
	result = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	result = (char *) malloc(sizeof(char) * (len + 1));
	if (!(result))
		return (NULL);
	if (a < 0)
		minusvalue(result, len, a);
	else
		value(result, len, a);
	return (result);
}
