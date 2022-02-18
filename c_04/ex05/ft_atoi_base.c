/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:27:02 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/18 19:10:03 by eandre-f         ###   ########.fr       */
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

int	validate_base(char *base)
{
	int	i;
	int	j;
	int	is;

	i = 0;
	is = 1;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				is = 0;
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			is = 0;
		if (ft_is_whitespace(base[i]))
			is = 0;
		i++;
	}
	if (i <= 1 || is == 0)
		return (0);
	return (1);
}

void	ft_isbase(char c, char *base, int *ret)
{
	int	i;

	*ret = 0;
	*(ret + 1) = 0;
	if (ft_is_whitespace(c))
		*ret = 1;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			*ret = 2;
			*(ret + 1) = i;
		}
		i++;
	}
}

int	ft_atoi_exec(char *str, char *base, int size, int end)
{
	int	sin;
	int	mult;
	int	result;
	int	isbase[2];

	sin = 1;
	mult = 1;
	result = 0;
	while (end >= 0)
	{
		if (str[end] == '-')
			sin *= -1;
		ft_isbase(str[end], base, isbase);
		if (isbase[0] == 2)
		{
			result += mult * isbase[1];
			mult *= size;
		}
		end--;
	}
	return (result * sin);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	end;

	if (validate_base(base) == 0)
		return (0);
	size = 0;
	while (base[size] != '\0')
		size++;
	end = 0;
	while (ft_is_whitespace(str[end]))
		end++;
	while (str[end] == '-' || str[end] == '+')
		end++;
	while (str[end] >= '0' && str[end] <= '9')
		end++;
	end--;
	return (ft_atoi_exec(str, base, size, end));
}
