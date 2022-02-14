/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:54:08 by grino             #+#    #+#             */
/*   Updated: 2022/02/14 02:26:38 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "input.h"
#include "vector.h"

void	ft_input(char *v_str, int *v_int)
{
	int	vi;
	int	vs;

	vi = 1;
	vs = 1;
	v_int[0] = ft_atoi(v_str[0]);
	while (v_str[vs] != '\0')
	{
		if (v_str[vs] == ' ' && v_str[vs + 1] >= '1' && v_str[vs + 1] <= '4')
		{
			v_int[vi] = ft_atoi(v_str[vs + 1]);
			vs += 2;
			vi++;
		}
		else
		{
			ft_error();
			return ;
		}
	}
}
