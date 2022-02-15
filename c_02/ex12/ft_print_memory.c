/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:01:50 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/14 19:39:25 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_range_max = 16;

void	print_memory(void *addr, int range_init)
{
	int	i;
	char *teste;

	// convert void* in char* |-> type casting
	// malloc(sizeof(char) * 4)
	// teste = (char *)addr;

	i = range_init;
	while (i < g_range_max)
	{
		printf("c %p", addr);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	i;
	int	range_init;

	if (size == 0)
		return ;
	i = 0;
	while (i < size)
	{
		range_init = ((i + 1) * g_range_max) - g_range_max;
		print_memory(*addr, range_init);
		i++;
	}
}
