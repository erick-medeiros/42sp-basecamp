/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:37:44 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/14 03:35:05 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_H
# define VIEW_H

char	*ft_view_string(char *string)
{
	char	*value;

	value = "0";
	if (compare_two_strings(string, "0001"))
		value = "4";
	if (compare_two_strings(string, "0010"))
		value = "3";
	if (compare_two_strings(string, "0100"))
		value = "2";
	if (compare_two_strings(string, "1000"))
		value = "1";
	return (value);
}

void	ft_view(char ***matrix, short int size, int debug)
{
	short int	lin;
	short int	col;

	lin = 0;
	while (lin < size)
	{
		col = 0;
		while (col < size)
		{
			if (debug)
				write(1, &matrix[lin][col][0], 4);
			else
				write(1, &(ft_view_string(&matrix[lin][col][0]))[0], 1);
			if (col != size - 1)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		lin++;
	}
}

#endif