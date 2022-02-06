/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 05:09:33 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 05:15:57 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		index;
	int		lin;
	int		col;
	char	c;

	index = 0;
	while (index < (x * y))
	{
		c = ' ';
		col = (index % x) + 1;
		lin = ((index - (index % x)) / x) + 1;
		if ((col == 1 || col == x) || (lin == 1 || lin == y))
			c = 'B';
		if ((col == 1 && lin == y) || (col == x && lin == 1))
			c = 'C';
		if ((col == 1 && lin == 1) || (col == x && lin == y && y > 1))
			c = 'A';
		ft_putchar(c);
		if (col == x)
			ft_putchar(10);
		index++;
	}
}
