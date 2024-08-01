/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:36:42 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/23 09:48:30 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
	c == '\r' || c == '\f' || c == '\v');
}

int	ft_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_digit(str[i]))
	{
		result = result * 10 + (str[i] - '0' );
		i++;
	}
	return (sign * result);
}
/*
int	main(int argc, char *argv[])
{
	int	answer;

	answer = ft_atoi(argv[1]);
	printf("The final number is: %d\n", answer);
	return (0);
}*/