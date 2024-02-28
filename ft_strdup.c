/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:36:44 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:36:45 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	size;
	char	*copy;

	size = (ft_strlen(str) + 1);
	copy = (char *)malloc(sizeof(char) * size);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
/*#include <stdio.h>

int main(void)
{
    const char *original = "Hello, world!";
    char *duplicate = ft_strdup(original);

    if (duplicate) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate); // Don't forget to free the memory when done
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/