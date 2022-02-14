/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:58:33 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/14 02:35:48 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	set_four_clue_row(int *row, int c1, int c2)
{
	int	i;

	if (c1 == 4)
	{
		i = 1;
		while (i <= 4)
			if (row[i] != i)
				return (0);
	}
	else if (c2 == 4)
	{
		i = 4;
		while (i >= 1)
		{
			if (row[i] != i)
			{
				return (0);
			}
		}
	}
	return (1);
}

int	set_four_clue_col(int *tab, int col, int c1, int c2)
{
	int	i;

	if (c1 == 4)
	{
		i = 1;
		while (i <= 4)
		{
			if (row[i][col] != i)
				return (0);
		}
	}
	else if (c2 == 4)
	{
		i = 4;
		while (i >= 1)
		{
			if (row[i][col] != i)
				return (0);
		}
	}
	return (1);
}

int	set_two_clue_row(int *row, int c1, int c2)
{
	if (c1 == 3 && c02 == 2)
		row[2] = 4;
	else if (c1 == 2 && c2 == 3)
		row[1] = 4;
	else if (c1 == 2 && c2 == 2)
	{
		row[1] = 4;
		row[2] = 3;
	}
	else if (c1 == 1 && c2 == 2)
	{
		row[0] = 4;
		row[3] = 3;
	}
	else if (c1 == 2 && c2 == 1)
	{
		row[1] = 3;
		row[3] = 4;
	}
	else if (c1 == 1)
		row[0] = 4;
	else if (c2 == 1)
		row[3] = 4;
}

int	set_two_clue_col(int *tab, int col, int c1, int c2)
{
	if (c1 == 3 && c02 == 2)
		tab[2][col] = 4;
	else if (c1 == 2 && c2 == 3)
		tab[1][col] = 4;
	else if (c1 == 2 && c2 == 2)
	{
		tab[1][col] = 4;
		tab[2][col] = 3;
	}
	else if (c1 == 1 && c2 == 2)
	{
		tab[0][col] = 4;
		tab[3][col] = 3;
	}
	else if (c1 == 2 && c2 == 1)
	{
		tab[1][col] = 3;
		tab[3][col] = 4;
	}
	else if (c1 == 1)
		tab[0][col] = 4;
	else if (c2 == 1)
		tab[3][col] = 4;
}
