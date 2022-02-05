/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 02:11:31 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/05 03:35:37 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_rush(char *matriz[], int x, int y);

void	rush(int x, int y)
{
	char	*matriz[9];
	int		lin;
	int		col;

	lin = 0;
	while (lin <= y)
	{
		col = 0;
		while (col <= x)
		{
			matriz[lin][col] = 'o';
			col++;
		}
		lin++;
	}
	write_rush(matriz, x, y);
	return ;
}
