/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:21:39 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/03 18:29:47 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	*alphabet_reverse;

	alphabet_reverse = "zyxwvutsrqponmlkjihgfedcba";
	write(1, alphabet_reverse, 26);
	return ;
}
