/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:11:54 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/10 01:37:46 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	v;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		v = tab[i];
		tab[i] = tab[size];
		tab[size] = v;
		i++;
		size--;
	}
}
