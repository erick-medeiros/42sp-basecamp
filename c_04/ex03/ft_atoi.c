/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:50:43 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/17 13:42:22 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi_exec(char *str, int end)
{
	int	i;
	int	result;
	int	sin;
	int	mult;

	i = end - 1;
	result = 0;
	mult = 1;
	sin = 1;
	while (i >= 0)
	{
		if (str[i] == '-')
			sin *= -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result += (str[i] - '0') * mult;
			mult *= 10;
		}
		i--;
	}
	return (result * sin);
}

int	ft_atoi(char *str)
{
	int		val;
	int		i;
	int		sin;
	int		end;

	val = 0;
	i = 0;
	sin = 1;
	end = 0;
	while (ft_is_whitespace(str[end]))
		end++;
	while (str[end] == '-' || str[end] == '+')
		end++;
	while (str[end] >= '0' && str[end] <= '9')
		end++;
	return (ft_atoi_exec(str, end));
}
