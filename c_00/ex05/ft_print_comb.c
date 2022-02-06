/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:36:04 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 14:00:39 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	d[3];
	int	i;

	i = 0;
	while (i >= 0)
	{
		d[2] = '0' + (i % 10);
		d[1] = '0' + (((i - (i % 10)) / 10) % 10);
		d[0] = '0' + (((i - (((i - (i % 10)) / 10) % 10)) / 10 / 10) % 10);
		if (d[0] < d[1] && d[1] < d[2])
		{	
			write(1, &d[0], 1);
			write(1, &d[1], 1);
			write(1, &d[2], 1);
			if (d[0] == '7' && d[1] == '8' && d[2] == '9')
				break ;
			else
				write(1, ", ", 2);
		}
		i++;
	}
	write(1, "\n", 1);
	return ;
}
