/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:14:42 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/24 10:50:55 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}
/*int main() {
    const char *s1 = "Hello";
    const char *s2 = "apple bees";

    int result = ft_strncmp(s1, s2, 20);

    if (result < 0) {
        printf("'%s' is less than '%s'\n", s1, s2);
    } else if (result > 0) {
        printf("'%s' is greater than '%s'\n", s1, s2);
    } else {
        printf("'%s' is equal to '%s'\n", s1, s2);
    }
    return 0;
}*/