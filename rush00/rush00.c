/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:25:37 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/14 13:03:59 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	validation(int x, int y)
{
	const char	*sentence;

	sentence = "Parameters must be positive integers!";
	if (x <= 0 || y <= 0)
	{
		write(1, sentence, 38);
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	validation(x, y);
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 || row == y - 1) && (col == 0 || col == x - 1))
				ft_putchar('o');
			else if (row == 0 || row == y - 1)
				ft_putchar('-');
			else if (col == 0 || col == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
