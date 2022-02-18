/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:32:04 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/03 13:16:15 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	is_n;
	char	is_p;

	is_n = 'N';
	is_p = 'P';
	if (n < 0)
	{
		write(1, &is_n, 1);
	}
	else if (n >= 0)
	{
		write(1, &is_p, 1);
	}
}
