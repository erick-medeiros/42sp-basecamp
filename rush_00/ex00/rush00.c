/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:11:31 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 03:02:50 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		lin;
	int		col;
	char	c;

	lin = 1;
	while (lin <= y)
	{
		col = 1;
		while (col <= x)
		{
			c = ' ';
			if ((lin == 1 || lin == y) && (col == 1 || col == x))
					c = 'o';
			if ((lin == 1 || lin == y) && (col != 1 && col != x))
					c = '-';
			if ((lin != 1 && lin != y) && (col == 1 || col == x))
					c = '|';
			ft_putchar(c);
			col++;
		}
		ft_putchar(10);
		lin++;
	}
}
