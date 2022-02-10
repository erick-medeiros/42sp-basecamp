/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:51:20 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/09 15:27:35 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main (void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 13;
	b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("a %d\n", a);
	printf("b %d\n", b);
	printf("div %d\n", div);
	printf("mod %d\n", mod);
}