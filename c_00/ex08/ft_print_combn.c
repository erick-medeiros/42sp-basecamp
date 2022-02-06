/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 03:54:32 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 15:52:26 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_first_show;

void	write_number(int number)
{
	int	ascii_0;
	int	ascii_number;

	ascii_0 = 48;
	ascii_number = number + ascii_0;
	write(1, &ascii_number, 1);
	return ;
}

int	calc_loop_max(int n)
{
	int	loop_max;
	int	loop;

	loop = 0;
	loop_max = 1;
	while (loop < n)
	{
		loop_max = loop_max * 10;
		loop++;
	}
	return (loop_max);
}

void	show_number(int *numbers, int n)
{
	int	show;
	int	loop;

	loop = 9 - n + 1;
	show = 1;
	while (loop < 9)
	{
		if (numbers[loop - 1] >= numbers[loop])
			show = 0;
		loop++;
	}
	if (show)
	{
		if (g_first_show == 1)
			write(1, ", ", 2);
		g_first_show = 1;
		loop = 9 - n;
		while (loop < 9)
		{
			write_number(numbers[loop]);
			loop++;
		}
	}
}

void	ft_print_combn_par2(int n, int *numbers)
{
	int	loop;
	int	nx;

	loop = 0;
	g_first_show = 0;
	while (loop < calc_loop_max(n))
	{
		nx = 8;
		numbers[nx] = numbers[nx] + 1;
		while (numbers[nx] > 9)
		{
			numbers[nx] = 0;
			numbers[nx - 1] = numbers[nx - 1] + 1;
			nx--;
		}
		show_number(numbers, n);
		loop++;
	}
	return ;
}

void	ft_print_combn(int n)
{
	int	numbers[9];

	if (!(0 < n && n < 10))
		return ;
	numbers[0] = 0;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[3] = 0;
	numbers[4] = 0;
	numbers[5] = 0;
	numbers[6] = 0;
	numbers[7] = 0;
	numbers[8] = 0;
	ft_print_combn_par2(n, numbers);
	return ;
}
