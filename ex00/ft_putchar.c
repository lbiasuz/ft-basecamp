/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:47:18 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/05 19:27:40 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int ox, int oy)
{
	if (y == 1 || y == oy)
	{
		if (x == 1)
		{
			write(1, "C", 1);
		}
		else if (x == ox)
		{
			write(1, "A", 1);
		}
		else
		{
			write(1, "B", 1);
		}
	}
	else if (x == 1 || x == ox)
	{
		write(1, "B", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}