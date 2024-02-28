/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:35:40 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:35:41 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    unsigned char buffer1[] = {1, 2, 3, 4, 5};
    unsigned char buffer2[] = {1, 2, 3, 4, 6}; // The last element is different
    size_t size = sizeof(buffer1);

    int result = ft_memcmp(buffer1, buffer2, size);

    if (result < 0) {
        printf("Buffer 1 is less than Buffer 2\n");
    } else if (result > 0) {
        printf("Buffer 1 is greater than Buffer 2\n");
    } else {
        printf("Buffer 1 is equal to Buffer 2\n");
    }

    return 0;
}*/