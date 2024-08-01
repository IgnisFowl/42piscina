/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:47:18 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/31 09:57:28 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	ft_cat_len(char **strs, char *sep, int size)
{
	int	i;
	int	sep_len;
	int	total_len;

	sep_len = ft_len(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_len(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_len;

	i = 0;
	total_len = ft_cat_len(strs, sep, size) + 1;
	result = (char *)malloc(sizeof(char) * total_len);
	if (size == 0)
		return (result);
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	char	*tab[4];

	tab[0] = "ab";
	tab[1] = "cd";
	tab[2] = "ef";
	tab[3] = "gh";
	printf("%s", ft_strjoin(4, tab, " "));
	return (0);
}
*/