/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:36:06 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:41:16 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*#include <stdio.h>

int main() {
    char *message = "Hello, world!";
    int file_descriptor = 1; // 1 represents standard output (stdout)

    ft_putendl_fd(message, file_descriptor);

    return 0;
}*/