/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:47:04 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/09 13:50:19 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 1;
	b = 2;

	printf("a %d\n", a);
	printf("b %d\n", b);
	ft_swap(&a, &b);
	printf("a %d\n", a);
	printf("b %d\n", b);	
}
