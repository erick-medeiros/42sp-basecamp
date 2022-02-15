/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 04:34:10 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/15 20:17:52 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	len_src;

	len = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && (len + i) < size)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i - 1] = '\0';
	return (len + len_src);
}
