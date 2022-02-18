/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eandre-f <eandre-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:01:13 by eandre-f          #+#    #+#             */
/*   Updated: 2022/02/14 03:06:20 by eandre-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "aux_functions_1.h"
#include "aux_functions_2.h"
#include "aux_functions_3.h"
#include "aux_functions_4.h"
#include "create_matrix.h"
#include "view.h"
#include "rules_1.h"
#include "rules_2.h"
#include "rules_3.h"

int	main(int argc, char *argv[])
{
	short int	size;
	char		***matrix;
	int			*observers;
	int			returnrules;

	size = 4;
	if (argc != 2)
	{
		return_error();
	}
	observers = get_observer_values(argv[1]);
	matrix = create_matrix(size);
	returnrules = rules(matrix, observers);
	if (returnrules == 1 || returnrules == 0)
	{
		ft_view(matrix, size, 0);
	}
	return (1);
}
