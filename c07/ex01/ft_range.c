/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:54:53 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/31 09:55:14 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n == -2147483648)
	{
		write(1, "2147483648", 11);
		return ;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
	ft_putnbr(array[i]); inserir na linha 61.
*/

int	*ft_range(int min, int max)
{
	int		i;
	int		*array;
	int		len;

	if (min >= max)
		return (0);
	len = max - min;
	array = (int *)malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	ft_range(1, 10);
	ft_putchar('\n');
	return (0);
}
*/