/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 12:39:59 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/19 13:40:37 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}


char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		ac;
	char	*p;

	i = 0;
	while (i++ < size)
		ac += ft_strlen(strs[i])
	p = malloc(ac + (i * ft_strlen(sep)));
	i = 0;
	while (i-- < 1)
	{
		while (strs[i][0])
		{
			p[j] = strs[i][0]
			strs[i]++;
			j++;
		}
		ac = 0;
		while (sep[ac])
		{
			p[j] = sep[ac];
			ac++;
			j++;
		}
		i++;
	}
	return (p);
}