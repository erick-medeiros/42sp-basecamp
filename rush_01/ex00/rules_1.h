/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:28:02 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/14 03:17:49 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_1_H
# define RULES_1_H

void	remove_option(char ***matrix, char lin, char col, int opt)
{
	char	*matrix3;

	matrix3 = &matrix[lin - 48][col - 48][opt - 1];
	if (*matrix3 != '0')
	{
		*matrix3 = '0';
	}
	return ;
}

void	block_all_option(char ***matrix, char lin, char col, int opt)
{
	char	*matrix3;
	int		size;
	int		i;

	size = 4;
	matrix3 = &matrix[lin - 48][col - 48][0];
	i = 0;
	while (i < size)
	{
		if (matrix3[i] != '0' && i != (opt - 1))
		{
			matrix3[i] = '0';
		}
		i++;
	}
}

int	check_matrix(char ***matrix, int lin, int col, char *compare)
{
	char	*p;

	p = &matrix[lin - 48][col - 48][0];
	return (compare_two_strings(p, compare));
}

char	*rules_sequence(unsigned int position)
{
	char	*data[16];

	data[0] = "00102030";
	data[1] = "01112131";
	data[2] = "02122232";
	data[3] = "03132333";
	data[4] = "30201000";
	data[5] = "31211101";
	data[6] = "32221202";
	data[7] = "33231303";
	data[8] = "00010203";
	data[9] = "10111213";
	data[10] = "20212223";
	data[11] = "30313233";
	data[12] = "03020100";
	data[13] = "13121110";
	data[14] = "23222120";
	data[15] = "33323130";
	return (data[position]);
}

#endif