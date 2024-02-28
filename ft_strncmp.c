/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:33 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:34 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*unc1;
	const unsigned char	*unc2;
	unsigned int		i;

	unc1 = (const unsigned char *)s1;
	unc2 = (const unsigned char *)s2;
	i = 0;
	while ((unc1[i] || unc2[i]) && i < n)
	{
		if (unc1[i] != unc2[i])
			return (unc1[i] - unc2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
    const char *str1 = "Hello, world!";
    const char *str2 = "Hello, thete!";
    size_t n = 7; // Compare the first 7 characters

    int result = ft_strncmp(str1, str2, n);

    if (result < 0) {
        printf("str1 is less than str2\n");
    } else if (result > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    return 0;
}*/