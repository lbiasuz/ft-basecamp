/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:51:15 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/05 19:27:02 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rectangle(int x, int y)
{
	int orig_x;
	int orig_y;

	orig_x = x;
	orig_y = y;
	while (0 < y)
	{
		while (0 < x)
		{
			ft_putchar(x, y, orig_x, orig_y);
			x = x - 1;
		}
		write(1, "\n", 1);
		x = orig_x;
		y = y - 1;
	}
}