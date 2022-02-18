/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:24:36 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/14 02:27:02 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREATE_MATRIX_H
# define CREATE_MATRIX_H

void	create_matrix_set_values(char *matrix, int size)
{
	int		opt;

	opt = 0;
	while (opt < size)
	{
		matrix[opt] = '1';
		opt++;
	}
	matrix[opt] = '\0';
}

char	***create_matrix(int size)
{
	int		col;
	int		lin;
	char	***matrix;

	matrix = malloc(sizeof(char **) * size);
	lin = 0;
	while (lin < size)
	{
		matrix[lin] = malloc(sizeof(char *) * size);
		col = 0;
		while (col < size)
		{
			matrix[lin][col] = malloc(sizeof(char) * (size + 1));
			create_matrix_set_values(matrix[lin][col], size);
			col++;
		}
		lin++;
	}
	return (matrix);
}

#endif