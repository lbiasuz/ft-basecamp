/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:07:32 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/12 22:53:25 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	srcl;

	i = 0;
	while (src[i] && i < (int) size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	srcl = i;
	while (i < (int) size)
	{
		dest[i] = '\0';
		i++;
	}
	while (src[srcl])
		srcl++;
	return (srcl);
}
