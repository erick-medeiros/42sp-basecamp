/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:57:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/15 04:33:07 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				ls1;
	int				ls2;
	int				compare;

	i = 0;
	ls1 = 0;
	ls2 = 0;
	compare = 1;
	while ((ls1 == 0 || ls2 == 0) && i < n)
	{
		if (s1[i] == '\0')
			ls1 = i + 1;
		if (s2[i] == '\0')
			ls2 = i + 1;
		if (s1[i] != s2[i] && compare)
			compare = 0;
		i++;
	}
	if (compare)
		return (0);
	return (s1 - s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		is;
	int		len;
	char	*p;

	len = ft_strlen(to_find);
	i = 0;
	is = 0;
	while (str[i])
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
