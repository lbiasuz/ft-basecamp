/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:51:15 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/05 23:18:03 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	select_char(int x, int y, int width, int height)
{
	if (y == 1 || y == height)
	{
		if (x == 1)
		{
			ft_putchar('A');
		}
		else if (x == width)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
	else if (x == 1 || x == width)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			select_char(i, j, x, y);
			i = i + 1;
		}
		ft_putchar('\n');
		i = 1;
		j = j + 1;
	}
}
