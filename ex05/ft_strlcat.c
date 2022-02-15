/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:47:23 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/15 16:31:07 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;
	
	j = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	r = i;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	while (src[j] != '\0')
		j++;
	dest[i] = '\0';
	return (r + j);
}
