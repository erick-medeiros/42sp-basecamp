/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:31:20 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/11 02:32:30 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is;

	i = 0;
	is = 1;
	while (str[i])
	{		
		if (is == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				is = 1;
			else
				is = 0;
		}
		i++;
	}
	if (i == 0 || is == 1)
		return (1);
	else
		return (0);
}
