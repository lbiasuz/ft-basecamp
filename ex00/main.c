/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:54:48 by grino             #+#    #+#             */
/*   Updated: 2022/02/14 02:27:05 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
