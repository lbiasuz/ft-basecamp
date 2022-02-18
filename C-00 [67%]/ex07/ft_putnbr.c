/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:31:39 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/06 12:18:14 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int power, char *arr)
{
	char	*p;

	while (power >= 0)
	{
		p = &arr[power];
		write(1, p, 1);
		power--;
	}
}

void	ft_putnbr(int nb)
{
	int		power;
	int		remainder;
	char	negative;
	char	integer_arr[11];

	power = 0;
	negative = '-';
	if (nb < 0)
	{
		write(1, &negative, 1);
		nb = nb * -1;
	}
	while (power < 10)
	{
		remainder = nb % 10;
		nb = nb / 10;
		integer_arr[power] = (char) remainder + 48;
		if (nb == 0)
			break ;
		power++;
	}
	print(power, &integer_arr[0]);
}
