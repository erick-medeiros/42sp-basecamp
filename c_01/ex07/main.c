/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:11:51 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/10 00:32:54 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int str[5];
	int d;

	str[0] = 1;
	str[1] = 2;
	str[2] = 3;
	str[3] = 4;
	str[4] = 5;
	d = 5;
	printf("> %d, %d, %d, %d, %d\n", str[0], str[1], str[2], str[3], str[4]);
	ft_rev_int_tab(&str[0], d);
	printf("< %d, %d, %d, %d, %d\n", str[0], str[1], str[2], str[3], str[4]);
	return 1;
}
