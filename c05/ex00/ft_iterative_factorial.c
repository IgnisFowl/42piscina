/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:54:03 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/24 16:08:06 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	result = 1;
	while (i < nb)
	{
		result += result * i;
		i++;
	}
	return (result);
}
/*int	main()
{
	int 	a;
	int	b;

	a = 5;
	b = ft_iterative_factorial(a);
	printf("%d\n", b);
}*/