/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:26:34 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/11 15:21:44 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = uppercase(str[i]);
		i++;
	}
	return (str);
}
