/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:45:38 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/12 02:08:31 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is;

	i = 0;
	is = 1;
	while (str[i])
	{
		if (is == 1)
		{
			if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
				is = 0;
			else
				is = 1;
		}
		i++;
	}
	if (i == 0 || is == 1)
		return (1);
	else
		return (0);
}
