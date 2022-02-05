/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:36:04 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/04 03:23:58 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int number)
{
	int	ascii_0;
	int	ascii_number;

	ascii_0 = 48;
	ascii_number = number + ascii_0;
	write(1, &ascii_number, 1);
	return ;
}

void	show_list(int d1, int d2, int d3)
{
	int	ascii_breakline;

	ascii_breakline = 10;
	if (d1 != d2 && d1 != d3 && d2 != d3)
	{	
		if (d1 < d2 && d2 < d3)
		{
			write_number(d1);
			write_number(d2);
			write_number(d3);
			if (d1 == 7 && d2 == 8 && d3 == 9)
			{
				write(1, &ascii_breakline, 1);
				return ;
			}
			write(1, ", ", 2);
		}
	}
	return ;
}

void	ft_print_comb(void)
{
	int	d1;
	int	d2;
	int	d3;

	d1 = 0;
	while (d1 <= 9)
	{
		d2 = 0;
		while (d2 <= 9)
		{
			d3 = 0;
			while (d3 <= 9)
			{
				show_list(d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
	return ;
}
