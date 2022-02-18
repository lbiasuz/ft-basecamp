/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:18:00 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/16 16:04:22 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	ac;
	int	sign;
	int	base_size;

	ac = 0;
	sign = 1;
	base_size = ft_strlen(base);
	if (!ft_check_base(base))
		return (0);
	while (*str == '-' || *str == '+' || *str == ' ')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	i = ft_index(str, base);
	while (i > -1)
	{
		ac = (ac * base_size) + i;
		str++;
		i = ft_index(str, base);
	}
	return (ac * sign);
}
