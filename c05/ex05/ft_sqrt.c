/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:44:58 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/28 11:50:35 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*int	main()
{
	int a = 369;
	if (ft_sqrt(a) > 0)
		printf("The square root of %d is %d.", a, ft_sqrt(a));
	else
		printf("The square root of %d is not an integer.", a);
	return (0);
}*/