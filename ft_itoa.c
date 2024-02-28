/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:35:22 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:35:23 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(long num)
{
	int	strlen;

	strlen = 0;
	if (num == 0)
		return (1);
	else if (num < 0)
	{
		strlen++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		strlen++;
	}
	return (strlen);
}

char	*ft_itoa(int n)
{
	int		lenstr;
	long	num;
	char	*str;

	num = n;
	lenstr = ft_lennum(num);
	str = (char *)malloc(sizeof(char) * (lenstr + 1));
	if (!str)
		return (NULL);
	*(str + lenstr--) = '\0';
	if (num == 0)
	{
		*(str + 0) = '0';
	}
	else if (num < 0)
	{
		num *= -1;
		*(str + 0) = '-';
	}
	while (num > 0)
	{
		*(str + lenstr--) = (48 + (num % 10));
		num /= 10;
	}
	return (str);
}
/*#include <stdio.h>

int main() {
    int num = -12345;

    char *num_str = ft_itoa(num);

    if (num_str) {
        printf("Integer: %d\n", num);
        printf("Integer as string: %s\n", num_str);
        free(num_str);  // Don't forget to free the allocated memory
    } else {
        printf("Conversion to string failed.\n");
    }

    return 0;
}*/