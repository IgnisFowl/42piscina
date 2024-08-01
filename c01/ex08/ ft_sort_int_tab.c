/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sort_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:38:41 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/15 14:07:13 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	temp;

	swap = 1;
	while (swap)
	{
		swap = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if ( tab[j]> tab[j + 1])
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swap = 1;
			j++;
		}
		i++;
	}
}

