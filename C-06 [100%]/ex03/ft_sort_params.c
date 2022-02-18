/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:49:23 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/17 19:17:02 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (argv[i][0] != '\0')
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*p;

	i = 1;
	while (i < argc)
	{
		j = argc - 1;
		while (i < j)
		{		
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				p = argv[i];
				argv[i] = argv[j];
				argv[j] = p;
			}
			j--;
		}
		i++;
	}
	ft_print_params(argc, argv);
}
