/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:47:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 15:51:58 by eandre-f         ###   ########.fr       */
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

int	convert_number_positive(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}

void	write_is_negative(int n)
{
	if (n < 0)
		write(1, "-", 1);
	return ;
}

void	run_write(int nb, int loop, int array_numbers[10])
{
	int	loop_show;

	write_is_negative(nb);
	loop--;
	loop_show = 9 - loop;
	while (loop >= 0)
	{	
		write_number(array_numbers[loop_show]);
		loop_show++;
		loop--;
	}
	if (nb == 0)
		write_number(0);
}

void	ft_putnbr(int nb)
{
	int	result_division;
	int	loop;
	int	array_numbers[10];

	result_division = convert_number_positive(nb);
	loop = 0;
	while (result_division > 0)
	{
		array_numbers[9 - loop] = result_division % 10;
		result_division = result_division / 10;
		loop++;
	}
	run_write(nb, loop, array_numbers);
	return ;
}
