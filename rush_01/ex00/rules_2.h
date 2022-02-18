/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 02:28:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/14 03:03:43 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_2_H
# define RULES_2_H

void	rules_default(char ***matrix, char *seq, int value)
{
	if (value == 4)
	{
		block_all_option(matrix, seq[0], seq[1], 1);
		block_all_option(matrix, seq[2], seq[3], 2);
		block_all_option(matrix, seq[4], seq[5], 3);
		block_all_option(matrix, seq[6], seq[7], 4);
	}
	if (value == 1)
	{
		block_all_option(matrix, seq[0], seq[1], 4);
	}
	if (value == 3)
	{
		remove_option(matrix, seq[0], seq[1], 3);
	}
}

void	init_rules(char ***matrix, int *observers)
{
	rules_default(matrix, rules_sequence(0), observers[0]);
	rules_default(matrix, rules_sequence(1), observers[1]);
	rules_default(matrix, rules_sequence(2), observers[2]);
	rules_default(matrix, rules_sequence(3), observers[3]);
	rules_default(matrix, rules_sequence(4), observers[4]);
	rules_default(matrix, rules_sequence(5), observers[5]);
	rules_default(matrix, rules_sequence(6), observers[6]);
	rules_default(matrix, rules_sequence(7), observers[7]);
	rules_default(matrix, rules_sequence(8), observers[8]);
	rules_default(matrix, rules_sequence(9), observers[9]);
	rules_default(matrix, rules_sequence(10), observers[10]);
	rules_default(matrix, rules_sequence(11), observers[11]);
	rules_default(matrix, rules_sequence(12), observers[12]);
	rules_default(matrix, rules_sequence(13), observers[13]);
	rules_default(matrix, rules_sequence(14), observers[14]);
	rules_default(matrix, rules_sequence(15), observers[15]);
}

void	rules_pars_in(char ***matrix, char *seq, int value1, int value2)
{
	if (value1 == 1 && value2 == 2)
	{
		block_all_option(matrix, seq[0], seq[1], 4);
		block_all_option(matrix, seq[6], seq[7], 3);
	}
	if (value1 == 2 && value2 == 1)
	{
		block_all_option(matrix, seq[0], seq[1], 3);
		block_all_option(matrix, seq[6], seq[7], 4);
	}
	if (value1 == 2 && value2 == 3)
	{
		block_all_option(matrix, seq[2], seq[3], 4);
	}
	if (value1 == 3 && value2 == 2)
	{
		block_all_option(matrix, seq[4], seq[5], 4);
	}
}

void	rules_pars(char ***matrix, int *observers)
{
	rules_pars_in(matrix, rules_sequence(0), observers[0], observers[4]);
	rules_pars_in(matrix, rules_sequence(1), observers[1], observers[5]);
	rules_pars_in(matrix, rules_sequence(2), observers[2], observers[6]);
	rules_pars_in(matrix, rules_sequence(3), observers[3], observers[7]);
	rules_pars_in(matrix, rules_sequence(8), observers[8], observers[12]);
	rules_pars_in(matrix, rules_sequence(9), observers[9], observers[13]);
	rules_pars_in(matrix, rules_sequence(10), observers[10], observers[14]);
	rules_pars_in(matrix, rules_sequence(11), observers[11], observers[15]);
}

#endif