/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarie-c2@c1r4p1.42sp.org.br <aarie-c2@c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:04:36 by aarie-c2@c1       #+#    #+#             */
/*   Updated: 2024/07/17 12:57:46 by aarie-c2@c1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

char	*ft_strcapitalize(char *str)
{
	char	*string;
	int		capitalize_next;

	capitalize_next = 1;
	string = str;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			capitalize_next = 0;
		}
		else if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			if (capitalize_next)
			{
				*str = *str - 32;
				capitalize_next = 0;
			}
		}
		else
		{
			capitalize_next = 1;
		}
		*str++;
	}
	return (string);
}
int main() {
    char str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}