/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:22:24 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/10 18:34:55 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src && i < (int) n)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	while (i < (int) n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
