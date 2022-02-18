/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:51:17 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/18 01:38:51 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	compare;

	i = 0;
	compare = 1;
	while (i >= 0)
	{
		if (s1[i] != s2[i] && compare)
		{
			compare = 0;
			break ;
		}
		if (s1[i] == '\0' || s2[i] == '\0')
			break ;
		i++;
	}
	if (compare)
		return (0);
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	while (++i < size)
	{
		j = i - 1;
		while (++j < size)
		{			
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	argc--;
	argv++;
	ft_sort_int_tab(argv, argc);
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
