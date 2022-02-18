/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:30:11 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/06 15:21:08 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int c, int d, int u)
{
	char	x[5];

	x[0] = c;
	x[1] = d;
	x[2] = u;
	x[3] = ',';
	x[4] = ' ';
	if (c == 55 && d == 56 && u == 57)
	{
		x[3] = (char) 0;
		x[4] = (char) 0;
		write(1, &x, 5);
	}
	else if (c < d && d < u)
	{
		write(1, &x, 5);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = 48;
	d = 48;
	u = 48;
	while (c < 58)
	{
		while (d < 58)
		{
			while (u < 58)
			{
				ft_print(c, d, u);
				u = u + 1;
			}
			d = d + 1;
			u = 48;
		}
		c = c + 1;
		d = 48;
	}
}
