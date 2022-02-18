/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:34:39 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/17 21:59:22 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pn;

	pn = nb;
	if (power == 0 && nb == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= pn;
		power--;
	}
	return (nb);
}
