/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:15:12 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/11 16:18:01 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

int	uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	is_alphanumeric(char c)
{
	int	is;

	is = 0;
	if (c >= 'a' && c <= 'z')
		is = 1;
	if (c >= 'A' && c <= 'Z')
		is = 1;
	if (c >= '0' && c <= '9')
		is = 1;
	return (is);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = lowercase(str[i]);
		if (i == 0)
			str[i] = uppercase(str[i]);
		if (i > 0 && is_alphanumeric(str[i]) && !is_alphanumeric(str[i - 1]))
			str[i] = uppercase(str[i]);
		i++;
	}
	return (str);
}
