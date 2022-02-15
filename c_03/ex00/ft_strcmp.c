/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:21:57 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/15 18:07:08 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	compare;

	i = 0;
	compare = 1;
	while (i >= 0)
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
