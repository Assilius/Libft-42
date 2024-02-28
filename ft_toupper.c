/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:38:13 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:38:14 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}
/*#include <stdio.h>

int main(void)
{
    int lowercase = 'a';
    int uppercase = ft_toupper(lowercase);

    printf("Original character: %c\n", lowercase);
    printf("Uppercase character: %c\n", uppercase);

    return 0;
}*/