/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 02:28:42 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/07 02:30:49 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	select_char(int x, int y, int w, int h)
{
	if (y == 1 || y == h)
	{
		if (x == 1 || x == w)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else if (x == 1 || x == w)
	{
		ft_putchar('|');
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
