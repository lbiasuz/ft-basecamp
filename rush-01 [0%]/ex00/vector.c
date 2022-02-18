/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:54:35 by grino             #+#    #+#             */
/*   Updated: 2022/02/14 02:27:18 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "input.h"
#include "vector.h"

void	ft_free(int *vector)
{
	free(vector);
}

void	ft_vector(char *argv)
{
	int	*vector;

	vector = (int *)malloc(16 * 4);
	ft_input(argv, vector);
	ft_free(vector);
}
