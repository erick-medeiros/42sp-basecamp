/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:55:34 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 15:51:43 by eandre-f         ###   ########.fr       */
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

void	show_comb(int d1, int d2, int d3, int d4)
{
	int	ascii_breakline;

	ascii_breakline = 10;
	if ((d1 == d3 && d2 == d4) || (d1 > d3) || (d1 == d3 && d2 > d4))
	{
		return ;
	}
	write_number(d1);
	write_number(d2);
	write(1, " ", 1);
	write_number(d3);
	write_number(d4);
	if (d1 == 9 && d2 == 8 && d3 == 9 && d4 == 9)
	{
		write(1, &ascii_breakline, 1);
		return ;
	}
	return ;
}

void	while_d4(int d1, int d2, int d3)
{
	int	d4;

	d4 = 0;
	while (d4 <= 9)
	{
		show_comb(d1, d2, d3, d4);
		d4++;
	}
	return ;
}

void	ft_print_comb2(void)
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
				while_d4(d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
	return ;
}
