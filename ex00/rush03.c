/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:51:15 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/05 15:51:56 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rectangle(int x, int y)
{
	int orig_x;

	orig_x = x;
	while (0 < y)
	{
		while (0 < x)
		{
			if (x == 1 || x == orig_x )
			{
				ft_putchar('B');
			} 
			else
			{
				ft_putchar(' ');
			}
			x = x - 1;
		}
		ft_putchar('\n');
		x = orig_x;
		y = y - 1;
	}
}