/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:24:18 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/19 04:00:39 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	ft_strlen_join(int size, char **strs, char *sep)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		if (i > 0)
			len += ft_strlen(sep);
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		len;

	if (size == 0)
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	len = ft_strlen_join(size, strs, sep) + 1;
	res = (char *)malloc(len * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i > 0)
			ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}
