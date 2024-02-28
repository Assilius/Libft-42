/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:35:13 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:35:14 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main(void) {
    char testChar1 = 'A';   // A printable character
    char testChar2 = ' ';   // A space (also printable)
    char testChar3 = 7;     // A control character (not printable)

    printf("ft_isprint('%c'): %d\n", testChar1, ft_isprint(testChar1));
    printf("ft_isprint('%c'): %d\n", testChar2, ft_isprint(testChar2));
    printf("ft_isprint('%c'): %d\n", testChar3, ft_isprint(testChar3));

    return 0;
}*/
