/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:33:09 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:33:39 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main(void) {
    char testChar1 = 'A';
    char testChar2 = '1';
    char testChar3 = '!';

    printf("ft_isalnum('%c'): %d\n", testChar1, ft_isalnum(testChar1));
    printf("ft_isalnum('%c'): %d\n", testChar2, ft_isalnum(testChar2));
    printf("ft_isalnum('%c'): %d\n", testChar3, ft_isalnum(testChar3));

    return 0;
}*/
