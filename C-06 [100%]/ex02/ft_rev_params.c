/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:18:20 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/02/17 19:02:32 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc--;
	while (argc > 0)
	{
		while (argv[argc][0] != '\0')
		{
			write(1, argv[argc], 1);
			argv[argc]++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
