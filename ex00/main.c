/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grino <grino@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:54:48 by grino             #+#    #+#             */
/*   Updated: 2022/02/13 23:55:07 by grino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "input.h"
#include "vector.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 31 && argv[1][0] >= '1' && argv[1][0] <= '4')
		{
			ft_vector(argv[1]);
		}
	}
	else
	{
		ft_error();
	}
	return (0);
}
