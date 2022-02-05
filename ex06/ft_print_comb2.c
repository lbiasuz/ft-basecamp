/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:34:22 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/05 14:31:25 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//2 vetores: v1, v2

void	sum_vector(char *v)
{
	if (v[0] == '9' && v[1] == '9')
	{
		v[0] = (char) 0;
		v[1] = (char) 0;
	}
	else if (v[1] == '9')
	{
		v[1] = '0';
		v[0]++;
	}
	else
	{
		v[1]++;
	}
}

char	*create_vector(char *x, char *v1, char *v2)
{
	x[0] = v1[0];
	x[1] = v1[1];
	x[2] = ' ';
	x[3] = v2[0];
	x[4] = v2[1];
	x[5] = ',';
	x[6] = ' ';
	if (v1[0] == '9' && v1[1] == '8')
	{
		x[5] = '.';
		x[6] = (char) 0;
	}
	return (&x[0]);
}

void	ft_loop(char *v1, char *v2)
{
	int i;
	int c;
	char x[7];
	
	i = 99;
	while (i > 0)
	{
		c = c + i;
		i--;
	}
	while (c > 0)
	{
		sum_vector(v2);
		if (v2[0] == (char) 0)
		{
			sum_vector(v1);
			v2[0] = v1[0];
			v2[1] = v1[1];
			sum_vector(v2);
		}
		write(1, create_vector(&x[0], v1, v2), 7);
		c = c -1;
	}
}

void	ft_print_comb2(void)
{
	char	v1[2];
	char	v2[2];

	v1[0] = '0';
	v1[1] = '0';
	v2[0] = '0';
	v2[1] = '0';
	ft_loop(&v1[0], &v2[0]);
}

int main(void)
{
	ft_print_comb2();
	return (0);
}