/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:36:49 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/15 23:39:03 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		index;
	int		sign;
	char	arr[11];

	index = 0;
	sign = 1;
	if (nb < 0)
		sign = -1;
	while (index < 10)
	{
		arr[index] = (char)((nb % 10) * sign) + 48;
		nb = nb / 10;
		if (nb == 0)
			break ;
		index++;
	}
	if (sign < 0)
		write(1, "-", 1);
	while (index >= 0)
	{
		write(1, &arr[index], 1);
		index--;
	}
}
