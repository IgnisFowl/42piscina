/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:51:29 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/19 15:42:55 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*aux_dest;

	aux_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (aux_dest);
}
/*int main() {
    char dest[20] = "Hello";
    char src[] = " World!";
	int nb = 7;

    printf("Before strcat: dest = %s\n", dest);
    ft_strncat(dest, src, nb);
    printf("After strcat: dest = %s\n", dest);
    return 0;
}*/