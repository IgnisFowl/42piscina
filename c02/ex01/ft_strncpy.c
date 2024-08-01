/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:01:52 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/18 11:30:50 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*result;

	result = dest;
	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (result);
}
int main()
{
	char src[] = "hello world";
	char dest[50];

	ft_strncpy(dest, src, 30);
	printf("%s\n", dest);
	printf("size of src= %d, size of destiny= %d", sizeof(src), sizeof(dest));
	return (0);
}