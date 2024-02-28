/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:35:51 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:35:52 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n--)
		{
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
		}
	}
	else
	{
		while (n--)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}
/*# include <stdio.h>

int main(void) {
    char buffer[10];  // A character array of size 10

    // Initialize the buffer with some data
    const char source[] = "Hello, World";

    // Use ft_memmove to copy data from source to destination
    ft_memmove(buffer, source, 10);

    // Print the contents of the destination buffer
    printf("Destination: %s\n", buffer);

    return 0;
}*/