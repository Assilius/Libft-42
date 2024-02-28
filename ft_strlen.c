/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:37:22 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:37:23 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}
/*# include <stdio.h>

int main(void) {
    const char *testString = "Hello, world!";
    
    size_t length = ft_strlen(testString);
    
    printf("Length of '%s' is %zu\n", testString, length);

    return 0;
}*/
