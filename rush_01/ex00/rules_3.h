/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_3.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:28:08 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/14 03:05:15 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_3_H
# define RULES_3_H

void	rules_full_3(char ***matrix, int i)
{
	char	*seq;
	int		check1;
	int		check2;

	seq = rules_sequence(i);
	check1 = check_matrix(matrix, seq[4], seq[5], "0010");
	check2 = check_matrix(matrix, seq[6], seq[7], "0001");
	if (check1 && check2)
	{
		block_all_option(matrix, seq[0], seq[1], 2);
		block_all_option(matrix, seq[2], seq[3], 1);
	}
	check1 = check_matrix(matrix, seq[4], seq[5], "0001");
	check2 = check_matrix(matrix, seq[6], seq[7], "0010");
	if (check1 && check2)
	{
		block_all_option(matrix, seq[0], seq[1], 1);
		block_all_option(matrix, seq[2], seq[3], 2);
	}
}

void	rules_full_2(char ***matrix, int i)
{
	char	*seq;
	int		check1;
	int		check2;

	seq = rules_sequence(i);
	check1 = check_matrix(matrix, seq[4], seq[5], "0001");
	check2 = check_matrix(matrix, seq[6], seq[7], "0010");
	if (check1 && check2)
	{
		block_all_option(matrix, seq[0], seq[1], 2);
		block_all_option(matrix, seq[2], seq[3], 1);
	}
}

void	rules_full(char ***matrix, int *observers)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (observers[i] == 3)
			rules_full_3(matrix, i);
		if (observers[i] == 2)
			rules_full_2(matrix, i);
		i++;
	}
}

int	rules(char ***matrix, int *observers)
{
	init_rules(matrix, &observers[0]);
	rules_pars(matrix, &observers[0]);
	rules_full(matrix, &observers[0]);
	update_impossible_options(matrix);
	update_impossible_options(matrix);
	update_impossible_options(matrix);
	update_impossible_options(matrix);
	update_impossible_options(matrix);
	update_impossible_options(matrix);
	update_impossible_options(matrix);
	update_impossible_options(matrix);
	update_unique_options(matrix);
	update_unique_options(matrix);
	rules_full(matrix, &observers[0]);
	update_impossible_options(matrix);
	update_unique_options(matrix);
	update_impossible_options(matrix);
	update_unique_options(matrix);
	return (check_if_solved(matrix));
}

#endif