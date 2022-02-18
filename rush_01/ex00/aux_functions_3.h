/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions_3.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:59:22 by ftada             #+#    #+#             */
/*   Updated: 2022/02/14 03:00:25 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_FUNCTIONS_3_H
# define AUX_FUNCTIONS_3_H

void	force_option(char ***options_m, int lin, int col, int option)
{
	if (option == 1)
	{
		options_m[lin][col] = "1000";
	}
	else if (option == 2)
	{
		options_m[lin][col] = "0100";
	}
	else if (option == 3)
	{
		options_m[lin][col] = "0010";
	}
	else if (option == 4)
	{
		options_m[lin][col] = "0001";
	}
}

void	update_unique_options_col(char ***options_m)
{
	int	j;
	int	option;
	int	aux;

	option = 1;
	while (option <= 4)
	{
		j = 0;
		while (j < 4)
		{
			aux = check_unique_unsolved_option_col(options_m, j, option);
			if (aux != -1)
				force_option(options_m, aux, j, option);
			j++;
		}
		option++;
	}
	update_impossible_options(options_m);
}

void	update_unique_options_row(char ***options_m)
{
	int	i;
	int	option;
	int	aux;

	option = 1;
	while (option <= 4)
	{
		i = 0;
		while (i < 4)
		{
			aux = check_unique_unsolved_option_row(options_m, i, option);
			if (aux != -1)
				force_option(options_m, i, aux, option);
			i++;
		}
		option++;
	}
	update_impossible_options(options_m);
}

void	update_unique_options(char ***options_m)
{
	update_unique_options_col(options_m);
	update_unique_options_row(options_m);
}

void	return_error(void)
{	
	write (1, "Error\n", 6);
}

#endif