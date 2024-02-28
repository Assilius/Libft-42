/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yali <yali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 19:36:12 by yali              #+#    #+#             */
/*   Updated: 2023/11/25 19:36:13 by yali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		num = 147483648;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if ((num >= 0) && (num <= 9))
	{
		ft_putchar_fd((num + 48), fd);
	}
	else
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putnbr_fd((num % 10), fd);
	}
}
/*#include <stdio.h>

int main() {
    int number = -12345; // Change to the integer you want to print
    int file_descriptor = 1; // 1 represents standard output (stdout)

    ft_putnbr_fd(number, file_descriptor);

    return 0;
}*/