/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grino <grino@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:54:35 by grino             #+#    #+#             */
/*   Updated: 2022/02/13 23:37:11 by grino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
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

	vector = (int *)malloc(16 * sizeof(int));
	ft_input(argv, vector);
	ft_free(vector);
}
