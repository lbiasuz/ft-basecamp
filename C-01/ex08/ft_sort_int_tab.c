/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:05:05 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/08 23:54:49 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	o_size;
	int	index;

	o_size = size;
	index = 0;
	while (index < o_size)
	{
		while (--size > index)
		{
			if (index >= size)
				break ;
			if (tab[index] > tab[size])
			{
				temp = tab[index];
				tab[index] = tab[size];
				tab[size] = temp;
			}
		}
		size = o_size;
		index++;
	}
}
