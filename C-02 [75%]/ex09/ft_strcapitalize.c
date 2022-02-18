/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:33:51 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/16 23:23:41 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	alpha(char c)
{
	if (c < 123 && c > 96)
		return (1);
	if (c > 64 && c < 91)
		return (2);
	if (c > 47 && c < 58)
		return (3);
	return (0);
}

int	capitalize(char *str, int i)
{
	while (alpha(str[i]))
	{
		if (alpha(str[i]) == 1 && i == 0)
			str[i] -= 32;
		else if (alpha(str[i - 1]) == 0 && alpha(str[i]) == 1)
			str[i] -= 32;
		else if (alpha(str[i - 1]) && alpha(str[i]) == 2)
			str[i] += 32;
		i++;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i = capitalize(str, i);
		i++;
	}
	return (str);
}
