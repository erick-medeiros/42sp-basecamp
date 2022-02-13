/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 01:15:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/13 01:05:38 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	c_not_printable(char c)
{
	int	is;

	is = 1;
	if ((c >= 0 && c <= 31) || c == 127)
		is = 0 ;
	return (is);
}

char	*hex(char *dest, char c)
{
	char	*data;

	data = "0123456789abcdef";
	dest[0] = '\\';
	dest[1] = data[(c / 16) % 16];
	dest[2] = data[c % 16];
	dest[3] = '\0';
	return (&dest[0]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	dest[4];

	i = 0;
	while (str[i])
	{
		if (c_not_printable(str[i]))
			write(1, &str[i], 1);
		else
			write(1, hex(&dest[0], str[i]), 3);
		i++;
	}
}
