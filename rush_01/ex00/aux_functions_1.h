/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions_1.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:50:38 by ftada             #+#    #+#             */
/*   Updated: 2022/02/14 02:58:59 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_FUNCTIONS_1_H
# define AUX_FUNCTIONS_1_H

short int	compare_two_strings(char	*string1, char	*string2)
{
	short int	i;

	i = 0;
	while (string1[i] == string2[i])
	{
		if (string1[i] == '\0' || string2[i] == '\0')
			break ;
		i++;
	}
	if (string1[i] == '\0' && string2[i] == '\0')
		return (1);
	else
		return (0);
}

int	*ft_allocate_matrix_1d(int n_size)
{
	int	*matrix;

	matrix = malloc(sizeof(int) * n_size);
	return (matrix);
}

int	*get_observer_values(char *shell_input)
{
	int	i;
	int	*observer_matrix;

	observer_matrix = ft_allocate_matrix_1d(16);
	i = 0;
	while (*shell_input != '\0')
	{
		if (*shell_input >= '1' && *shell_input <= '4')
		{
			observer_matrix[i] = *shell_input - 48;
			i++;
		}
		shell_input++;
	}
	return (observer_matrix);
}

int	count_options(char *block_address)
{
	int	count_options;
	int	i;

	count_options = 0;
	i = 0;
	while (i < 4)
	{
		if (block_address[i] == '1')
			count_options++;
		i++;
	}
	return (count_options);
}

int	get_value(char *block_address)
{
	int	value;

	value = -1;
	if (compare_two_strings(block_address, "0001"))
	{
		value = 4;
	}
	if (compare_two_strings(block_address, "0010"))
	{
		value = 3;
	}	
	if (compare_two_strings(block_address, "0100"))
	{
		value = 2;
	}	
	if (compare_two_strings(block_address, "1000"))
	{
		value = 1;
	}
	return (value);
}

#endif
