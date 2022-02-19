/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:59:36 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/19 02:34:14 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * 4);
	if (p == 0)
		return (0);
	i = 0;
	while (min + i < max)
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
