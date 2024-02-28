/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:34:21 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:34:22 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main(void) {
    char testChar1 = 'A';
    char testChar2 = '1';
    char testChar3 = 128;

    printf("ft_isascii('%c'): %d\n", testChar1, ft_isascii(testChar1));
    printf("ft_isascii('%c'): %d\n", testChar2, ft_isascii(testChar2));
    printf("ft_isascii('%c'): %d\n", testChar3, ft_isascii(testChar3));

    return 0;
}*/
