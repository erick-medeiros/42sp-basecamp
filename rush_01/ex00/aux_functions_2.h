/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions_2.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftada <ftada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:57:52 by ftada             #+#    #+#             */
/*   Updated: 2022/02/14 01:59:19 by ftada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_FUNCTIONS_2_H
# define AUX_FUNCTIONS_2_H

void	block_option(char ***matrix, int lin, int col, int opt)
{
	char	*matrix3;

	matrix3 = &matrix[lin][col][opt - 1];
	if (*matrix3 != '0')
	{
		*matrix3 = '0';
	}
}

void	remove_col_row_options(char ***options_m, int lin, int col, int option)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (i != lin)
		{
			block_option(options_m, i, col, option);
		}
		i++;
	}
	while (j < 4)
	{
		if (j != col)
		{
			block_option(options_m, lin, j, option);
		}
		j++;
	}
}

void	update_impossible_options(char ***options_m)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (count_options(options_m[i][j]) == 1)
			{
				value = get_value(options_m[i][j]);
				remove_col_row_options(options_m, i, j, value);
			}
			j++;
		}
		i++;
	}
}

int	check_unique_unsolved_option_col(char ***options_m, int col, int option)
{
	int		i;
	int		result;
	int		option_counter;
	char	curr_option;

	i = 0;
	option_counter = 0;
	while (i < 4)
	{
		curr_option = options_m[i][col][option - 1];
		if (count_options(options_m[i][col]) != 1 && curr_option == '1')
		{
			option_counter++;
			result = i;
		}
		i++;
	}
	if (option_counter == 1)
		return (result);
	return (-1);
}

int	check_unique_unsolved_option_row(char ***options_m, int row, int option)
{
	int		i;
	int		result;
	int		option_counter;
	char	curr_option;

	i = 0;
	option_counter = 0;
	while (i < 4)
	{
		curr_option = options_m[row][i][option - 1];
		if (count_options(options_m[row][i]) != 1 && curr_option == '1')
		{
			option_counter++;
			result = i;
		}
		i++;
	}
	if (option_counter == 1)
		return (result);
	return (-1);
}

#endif