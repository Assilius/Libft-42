/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:42:04 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:42:18 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*ptr == '\f') || (*ptr == '\n') || (*ptr == '\r')
		|| (*ptr == '\t') || (*ptr == '\v') || (*ptr == ' '))
		ptr++;
	if ((*ptr == '+') || (*ptr == '-'))
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while ((*ptr >= '0') && (*ptr <= '9'))
	{
		res *= 10;
		res += (*ptr - 48);
		ptr++;
	}
	return (res * sign);
}
/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *str = "   ---+++12345"; // Test string containing an integer

    int result = ft_atoi(str);
	int result1 = atoi(str);

    printf("String: \"%s\"\n", str);
    printf("Parsed integer: %d\n", result);
	printf("Parsed integer: %d\n", result1);

    return 0;
}*/
