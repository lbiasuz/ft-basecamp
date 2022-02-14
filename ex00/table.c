/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:28:39 by lschimud          #+#    #+#             */
/*   Updated: 2022/02/14 02:32:06 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*init_table(void)
{
	int	table[4][4];

	linha = 0;
	coluna = 0;
	while (linha < 4)
	{
		while (coluna < 4)
		{
			table[linha][coluna] = 0;
			coluna++;
		}
		linha++;
	}
	return (&table[0]);
}
