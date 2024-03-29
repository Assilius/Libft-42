/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:08 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:09 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;
	size_t	res;
	size_t	n;

	if ((dest == NULL) && (dest_size == 0))
		return (0);
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (dest_size < len_dest)
		return (ft_strlen(src) + dest_size);
	i = 0;
	n = dest_size - len_dest;
	res = len_dest + len_src;
	while (((i + 1) < n) && (*(src + i) != '\0'))
	{
		*(dest + (len_dest + i)) = *(src + i);
		i++;
	}
	(*(dest + (len_dest + i)) = '\0');
	return (res);
}
/*# include <stdio.h>

int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    size_t result;

    result = ft_strlcat(dest, src, sizeof(dest));

    printf("Destination after ft_strlcat: %s\n", dest);
    printf("Result of ft_strlcat: %zu\n", result);

    return 0;
}*/