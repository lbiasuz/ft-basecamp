/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:43:29 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/16 03:03:53 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		index;
	int		sign;
	int		bl;
	char	arr[11];

	index = 0;
	sign = 1;
	bl = ft_strlen(base);
	if (nbr < 0)
		sign = -1;
	while (index < bl)
	{
		arr[index] = base[((nbr % bl) * sign)];
		nbr = nbr / bl;
		if (nbr == 0)
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
