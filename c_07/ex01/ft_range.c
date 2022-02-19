/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:08:53 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/19 04:00:01 by eandre-f         ###   ########.fr       */
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
