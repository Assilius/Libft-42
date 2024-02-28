/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:35:28 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:35:29 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == ((unsigned char)c))
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned char buffer[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int value_to_find = 5;
    size_t size = sizeof(buffer);

    void *result = ft_memchr(buffer, value_to_find, size);

    if (result) {
        printf("Value %d found at position: %lu\n", value_to_find,
        (unsigned long)((unsigned char *)result - buffer));
    } else {
        printf("Value %d not found in the buffer.\n", value_to_find);
    }

    return 0;
}*/
