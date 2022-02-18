/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions_4.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftada <ftada@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:00:38 by ftada             #+#    #+#             */
/*   Updated: 2022/02/14 02:01:09 by ftada            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_FUNCTIONS_4_H
# define AUX_FUNCTIONS_4_H

int	check_if_solved(char ***option_m)
{
	int	i;
	int	j;
	int	count_unsolved;

	i = 0;
	count_unsolved = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (count_options(option_m[i][j]) == 0)
			{
				return_error();
				return (-1);
			}
			else if (count_options(option_m[i][j]) > 1)
				count_unsolved++;
			j++;
		}
		i++;
	}
	if (count_unsolved > 0)
		return (0);
	return (1);
}

#endif