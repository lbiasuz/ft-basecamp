/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lqualtie <laisqualtieri0@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:55:00 by lqualtie          #+#    #+#             */
/*   Updated: 2022/02/06 16:52:07 by lqualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void select_char(int x, int y, int witdh, int height) {
	if(y == 1 || y == height){
		if(x == 1 && y == 1) {
		ft_putchar('/');	
		}
		else if(x == 1 && y == height) {
			ft_putchar('\\');
		}
		if(x == witdh && y == 1) {
			ft_putchar('\\');
		}
		else if(x == witdh && y == height) {
			ft_putchar('/');
		}
		else {
			ft_putchar('*');
		}
	}
	else if(x == 1 || x == witdh) {
		ft_putchar('*');
	}	
	else {
		ft_putchar(' ');
	}
}

void rush(int x, int y) {
	
	int w;
	int h;

	w = 1;
	h = 1;
	while(h <= y) {
		while(w <= x) {
			select_char(w, h, x, y);
			++w;
		}
		ft_putchar('\n');
		w = 1;
		++h;
	}


	
}