/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:36:02 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:36:03 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <unistd.h> // Include the header for the write function

int main() {
    char character = 'A'; // Change to the character you want to print
    int file_descriptor = 1; // 1 represents standard output (stdout)

    ft_putchar_fd(character, file_descriptor);

    return 0;
}*/