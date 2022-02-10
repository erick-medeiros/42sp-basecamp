/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:57:05 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/09 19:38:02 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main()
{
	int a;
	int b;

	a = 20;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("a %d\n", a);
	printf("b %d\n", b);
}
