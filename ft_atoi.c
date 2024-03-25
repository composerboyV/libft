/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:07:59 by junkwak           #+#    #+#             */
/*   Updated: 2024/03/21 15:36:28 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	a;
	long	i;
	long	result;

	a = 0;
	i = 1;
	result = 0;
	while ((nptr[a] >= 9 && nptr[a] <= 13) || nptr[a] == 32)
		a++;
	if (nptr[a] == '-' || nptr[a] == '+')
	{
		if (nptr[a] == '-')
			i *= -1;
		a++;
	}
	if (nptr[a] == '-' || nptr[a] == '+')
		return (0);
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		result = (result * 10) + (nptr[a] - '0');
		a++;
	}
	return (result * i);
}
