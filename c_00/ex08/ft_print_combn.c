/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 03:54:32 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/06 23:02:32 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_show(char *list, int n)
{
	int	show;
	int	nx;

	show = 1;
	nx = n - 1;
	while (nx > 0)
	{
		if (list[nx] <= list[nx - 1])
			show = 0;
		nx--;
	}
	return (show);
}

int	is_last(char *list, int n)
{
	char	last;
	int		nx;

	last = 1;
	nx = n - 1;
	while (nx > 0)
	{
		if (list[n - 1] == '9' && list[nx] == (list[nx - 1] + 1) && last == 1)
			last = 1;
		else
			last = 0;
		nx--;
	}
	return (last);
}

void	run_func(char *list, int n)
{
	int		loop;
	int		nx;

	loop = 0;
	while (loop >= 0)
	{
		if (loop < 8)
			list[loop + 1] = '0';
		nx = 0;
		list[nx]++;
		while (list[nx] > '9')
		{
			list[nx] = '0';
			list[nx + 1]++;
			nx++;
		}
		loop++;
		if (!is_show(list, n))
			continue ;
		write(1, list, n);
		if (is_last(list, n))
			break ;
		else
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	char	list[9];

	if (!(0 < n && n < 10))
		return ;
	if (n == 1)
	{
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
		return ;
	}
	list[0] = '0';
	run_func(list, n);
}
