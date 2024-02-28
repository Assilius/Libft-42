/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:33:02 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:42:54 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	size_t	i;
	void	*ptr;

	total_size = count * size;
	if (count && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (total_size-- > 0)
		{
			((char *)ptr)[i++] = 0;
		}
		return (ptr);
	}
}
/*#include <stdio.h>

int main(void)
{
    size_t nmemb = 5;
    size_t size = 4; // Each element is 4 bytes

    void *result = ft_calloc(nmemb, size);

    if (result) {
        int *intArray = (int *)result;
        printf("Allocated and initialized array: ");
        for (size_t i = 0; i < nmemb; i++) {
            printf("%d ", intArray[i]);
        }
        printf("\n");
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/