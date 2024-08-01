/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:58:02 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/21 10:01:39 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main() {
    const char *s1 = "Hello";
    const char *s2 = "apple bees";

    int result = ft_strcmp((char *)s1, (char *)s2);

    if (result < 0) {
        printf("'%s' is less than '%s'\n", s1, s2);
    } else if (result > 0) {
        printf("'%s' is greater than '%s'\n", s1, s2);
    } else {
        printf("'%s' is equal to '%s'\n", s1, s2);
    }
    return 0;
}*/