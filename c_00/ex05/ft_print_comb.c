/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:36:04 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 23:40:27 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	show_numbers(char *numbers)
{
	char	n;

	n = numbers[0] + '0';
	write(1, &n, 1);
	n = numbers[1] + '0';
	write(1, &n, 1);
	n = numbers[2] + '0';
	write(1, &n, 1);
	return ;
}

void	ft_print_comb(void)
{
	char	d[3];
	int		i;

	i = 0;
	while (i >= 0)
	{
		d[2] = i % 10;
		d[1] = ((i - d[2]) / 10) % 10;
		d[0] = ((i - d[1]) / 10 / 10) % 10;
		if (d[0] < d[1] && d[1] < d[2])
		{
			show_numbers(d);
			if (d[0] == 7 && d[1] == 8 && d[2] == 9)
				break ;
			else
				write(1, ", ", 2);
		}
		i++;
	}
	return ;
}
