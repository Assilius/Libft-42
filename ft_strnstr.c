/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:41 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:42 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*little))
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && *(big + i) != '\0')
	{
		while (*(big + i + j) == *(little + j)
			&& *(little + j) != '\0' && *(big + i + j) != '\0' && i + j < len)
			j++;
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
    const char *big = "Hello, world!";
    const char *little = "world";
    size_t len = 13;  // The maximum length to search in

    char *result = ft_strnstr(big, little, len);

    if (result) {
        printf("Substring '%s' found at position: %ld\n", little, result - big);
    } else {
        printf("Substring '%s' not found in the string.\n", little);
    }

    return 0;
}*/