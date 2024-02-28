/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:47 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:48 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occur;

	last_occur = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occur = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_occur);
}
/*#include <stdio.h>

int main(void)
{
    const char *str = "Hello world";
    int character_to_find = 'o';

    char *result = ft_strrchr(str, character_to_find);

    if (result) {
        printf("Character '%c' found at position: %ld\n",
        character_to_find, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", character_to_find);
    }

    return 0;
}*/
