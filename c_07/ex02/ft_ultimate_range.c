/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:32:21 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/19 03:59:47 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	dest = NULL;
	if (min >= max)
		return (dest);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (dest);
	i = 0;
	while ((min + i) < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
		return (0);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
