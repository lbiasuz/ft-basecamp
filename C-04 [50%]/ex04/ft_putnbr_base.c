/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 01:43:29 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/16 17:34:25 by lbiasuz          ###   ########.fr       */
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

int	ft_index(char *str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == *str)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_check_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || base[i] == '	')
			return (0);
		if (i != ft_index(&base[i], base))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_write(int index, int sign, char *arr)
{
	if (sign < 0)
		write(1, "-", 1);
	while (index >= 0)
	{
		write(1, &arr[index], 1);
		index--;
	}
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
	if (!ft_check_base(base))
		write(1, "0", 1);
	else
	{
		while (index < bl)
		{
			arr[index] = base[((nbr % bl) * sign)];
			nbr = nbr / bl;
			if (nbr == 0)
				break ;
			index++;
		}
		ft_write(index, sign, arr);
	}
}
