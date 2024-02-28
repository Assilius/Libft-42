/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:35:58 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:35:59 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *buffer, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)buffer + i) = c;
		i++;
	}
	return (buffer);
}
/*# include <stdio.h>

int main(void) {
    char buffer[10];  // A character array of size 10

    // Using ft_memset to set the buffer to 'X' for the first 5 bytes
    ft_memset(buffer, 'X', 5);

    // Print the contents of the buffer
    for (size_t i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    return 0;
}*/