/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:11:15 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/05 03:33:35 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_rush(char *matriz[], int x, int y)
{
	int	lin;
	int	col;

	lin = y;
	while (lin >= 0)
	{
		col = x;
		while (col >= 0)
		{
			write(1, &matriz[lin][col], 1);
			col--;
		}
		write(1, "\n", 1);
		lin--;
	}
	return ;
}
