/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:15 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:16 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (lensrc);
	while (((size - 1) > i) && (*(src + i) != '\0'))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (lensrc);
}
/*# include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20]; // Destination buffer with enough space
    size_t result;

    result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Result of ft_strlcpy: %zu\n", result);

    return 0;
}*/