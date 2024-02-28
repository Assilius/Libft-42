/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:32:45 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:32:52 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *buffer, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)buffer + i) = '\0';
		i++;
	}
}
/*
# include <stdio.h>

int main(void) {
    char buffer[10];  // A character array of size 10

    // Initialize the buffer with some data
    int i = 0;
    while (i < 10, i++) {
        buffer[i] = 'A' + i;
    }

    // Use ft_bzero to write null bytes to the buffer
    size_t n = 5;
    size_t j = 0;
    while (j < n) {
        *((unsigned char *)buffer + j) = '\0';
        j++;
    }

    // Print the contents of the buffer
    int k = 0;
    while (k < 10) {
        printf("%c ", buffer[k]);
        k++;
    }
    printf("\n");

    return 0;
}*/
