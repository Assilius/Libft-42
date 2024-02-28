/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:34:03 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:34:07 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main(void) {
    char testChar1 = 'A';
    char testChar2 = '1';
    char testChar3 = '!';

    printf("ft_isalpha('%c'): %d\n", testChar1, ft_isalpha(testChar1));
    printf("ft_isalpha('%c'): %d\n", testChar2, ft_isalpha(testChar2));
    printf("ft_isalpha('%c'): %d\n", testChar3, ft_isalpha(testChar3));

    return 0;
}*/
