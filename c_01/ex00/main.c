/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:19:15 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/09 19:39:55 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	nbr;

	nbr = 10;
	printf("%d\n", nbr);
	ft_ft(&nbr);
	printf("%d\n", nbr);
}
