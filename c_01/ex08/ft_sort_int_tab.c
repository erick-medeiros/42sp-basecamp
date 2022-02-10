/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:14:36 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/10 18:41:27 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	val;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size - a - 1)
		{
			if (tab[b] > tab[b + 1])
			{
				val = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = val;
			}
			b++;
		}
		a++;
	}
}
