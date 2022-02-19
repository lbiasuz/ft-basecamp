/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:05:08 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/19 12:30:35 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * 4);
	if (*range == 0)
		return (0);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int *p;
	int **range;
	int i;

	range = &p;
	ft_ultimate_range(range, 15, 70);
	
	for (i = 0; i < 55; i++)
	{
		printf("%d", (*range)[i]); 
	}
}