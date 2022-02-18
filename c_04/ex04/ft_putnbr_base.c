/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:10:19 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/18 19:10:19 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_recursion(int nbr, char *base, int size)
{
	int	d;

	if (nbr == 0)
		return ;
	ft_putnbr_base_recursion(nbr / size, base, size);
	d = nbr % size;
	if (d < 0)
		d *= -1;
	write(1, &base[d], 1);
}

int	validate_base(char *base)
{
	int	i;
	int	j;
	int	is;

	i = 0;
	is = 1;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				is = 0;
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			is = 0;
		i++;
	}
	if (i <= 1 || is == 0)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	if (validate_base(base) == 0)
		return ;
	size = 0;
	while (base[size] != '\0')
		size++;
	if (nbr < 0)
		write(1, "-", 1);
	ft_putnbr_base_recursion(nbr, base, size);
}
