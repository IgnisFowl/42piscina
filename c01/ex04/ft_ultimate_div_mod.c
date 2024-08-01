/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:05:10 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/15 14:08:43 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*
int	main (void)
{
	int a;
	int b;

	a = 5;
	b = 10;

	printf("a: %d, b: %d.\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d.\n", a, b);

}
*/
