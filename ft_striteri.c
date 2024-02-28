/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:36:54 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:36:55 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}
/*#include <stdio.h>

// A sample function that appends the character index to each character
void append_index(unsigned int index, char *c) {
    if (index <= 9) {
        *c = '0' + index;
    }
}

int main() {
    char input_string[] = "Hello";

    ft_striteri(input_string, append_index);

    printf("Modified string: \"%s\"\n", input_string);

    return 0;
}*/