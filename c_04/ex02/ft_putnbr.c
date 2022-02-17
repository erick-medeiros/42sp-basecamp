/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:22:04 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/16 14:51:26 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int number)
{
	char	c;

	c = number + 48;
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	numbers[10];

	if (nb == 0)
	{
		write_number(0);
		return ;
	}
	if (nb < 0)
		write(1, "-", 1);
	i = 0;
	while (nb != 0)
	{
		numbers[i] = nb % 10;
		if (numbers[i] < 0)
			numbers[i] = numbers[i] * -1;
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write_number(numbers[i]);
		i--;
	}
}
