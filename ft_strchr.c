/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:36:32 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:36:33 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	while (*s)
	{
		if (*s == (char)i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, world!";
    int character_to_find = 'o';

    char *result = ft_strchr(str, character_to_find);

    if (result) {
        printf("Character '%c' found at position: %ld\n",
        character_to_find, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", character_to_find);
    }

    return 0;
}*/
