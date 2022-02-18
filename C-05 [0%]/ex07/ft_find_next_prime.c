/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:06:42 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/18 17:42:40 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb == 0 || nb == 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	if (nb == 2147483647)
		return (1);
	i = 3;
	while (i < 46340 && (i * i) <= nb)
	{
		if (!(nb % i) || !(nb % (i + 2)) || !(nb % (i + 4)) || !(nb % (i + 6)))
			return (0);
		i += 8;
	}
	return (1);
}


int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}