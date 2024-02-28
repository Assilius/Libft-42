/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:34:55 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:34:56 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main(void) {
    char testChar1 = 'A';
    char testChar2 = '1';
    char testChar3 = '!';

    printf("ft_isdigit('%c'): %d\n", testChar1, ft_isdigit(testChar1));
    printf("ft_isdigit('%c'): %d\n", testChar2, ft_isdigit(testChar2));
    printf("ft_isdigit('%c'): %d\n", testChar3, ft_isdigit(testChar3));

    return 0;
}*/
