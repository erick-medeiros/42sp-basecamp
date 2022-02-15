/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:40:59 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/15 18:07:43 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				compare;

	i = 0;
	compare = 1;
	while (i < n)
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
