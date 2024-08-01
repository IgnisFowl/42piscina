/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 10:00:16 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/30 11:47:10 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argv(char *argv)
{
	int	len;

	len = 0;
	while (argv[len] != '\0')
	{
		len++;
	}
	write(1, argv, len);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	sort_argv(int argc, char *argv[])
{
	int		i;
	int		j;
	int		swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 1;
		while (i < argc - 1)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					ft_swap(&argv[i], &argv[j]);
					swap = 1;
				}
				j++;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort_argv(argc, argv);
	if (argc > 2)
	{
		while (i < argc)
		{
			print_argv(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
