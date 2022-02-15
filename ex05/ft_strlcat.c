/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:47:23 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/15 02:10:14 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	
	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	dest[i]++;
	while (src[j] != '\0' && i < (int) size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return ((unsigned int) i);
}
