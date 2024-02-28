/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:38:08 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:38:09 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}
/*#include <stdio.h>

int main(void)
{
    int uppercase = 'A';
    int lowercase = ft_tolower(uppercase);

    printf("Original character: %c\n", uppercase);
    printf("Lowercase character: %c\n", lowercase);

    return 0;
}*/
