/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:35:47 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:35:48 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
		i++;
	}
	return (dest);
}
/*# include <stdio.h>
int main(void) {
    char source[] = "Hello";  // Source data
    char destination[10];     // Destination buffer

    // Copy data from source to destination using ft_memcpy
    ft_memcpy(destination, source, 4);

    // Print the contents of the destination buffer
    printf("Destination: %s\n", destination);

    return 0;
}*/
