/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:41:58 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/17 19:54:57 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ac;

	ac = 1;
	while (nb > 1)
	{
		ac *= nb;
		nb--;
	}
	return (ac);
}
