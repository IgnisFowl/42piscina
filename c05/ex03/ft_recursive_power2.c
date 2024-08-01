/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 18:03:09 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/29 09:13:59 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_iterative_power(nb, power - 1));
}
int	main()
{
	int	a;
	int	b;

	a = 3;
	b = 3;
	printf("%d power %d equals %d.\n", a, b, ft_iterative_power(a, b));
	return (0);
}