/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:57:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/18 20:27:51 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		is;
	char	*p;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	is = 0;
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, len) == 0)
		{
			is = 1;
			break ;
		}
		i++;
	}
	if (is)
		p = &str[i];
	return (p);
}
