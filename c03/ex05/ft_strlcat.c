/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:15:17 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/22 11:16:50 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res_d;
	unsigned int	res_s;

	i = ft_strlen(dest);
	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
/*int main() {
    char dest[20] = "Hello, ";
    char *src = "world!";
	unsigned size = 20;

    printf("Before concatenation:\n");
    printf("dst: %s\n", dest);
    printf("src: %s\n", src);

    int result;
	result = ft_strlcat(dest, src, size);
	//result = sizeof(dest);

    printf("\nAfter concatenation:\n");
    printf("dst: %s\n", dest);
    printf("Length of concatenated string: %d\n", result);
	
    return 0;
}*/