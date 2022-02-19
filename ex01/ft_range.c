/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 00:59:36 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/19 02:22:47 by lbiasuz          ###   ########.fr       */
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

int	main(void)
{
	int	*p;
	int	i;
	
	p = ft_range(15, 70);
	for (i = 0; i < 55; i++)
		printf("%d ", p[i]);
}

15161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869