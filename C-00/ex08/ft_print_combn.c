/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:33:54 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/06 19:01:41 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sum_char(int index, int n, char *arr)
{
	if (index != -1)
	{
		if (arr[index] == (char) 58)
		{
			arr[index] = (char) 48;
			sum_char(index - 1, n, arr);
		}
		if (index == n)
		{
			write(1, arr, index + 1);
			write(1, ",", 2);
		}
		arr[index]++;
		if (arr[index + 1] == (char) 48)
		{
			arr[index + 1] = arr[index];
			sum_char(index + 1, n, arr);
		}
		sum_char(index, n, arr);
	}
}

void	ft_print_combn(int n)
{
	int		index;
	char	arr[10];

	index = -1;
	while (index++ < n)
		arr[index - 1] = (char) index + 48;
	arr[index - 1] = (char) 0;
	sum_char(index - 2, n, &arr[0]);
}
