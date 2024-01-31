/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:59:10 by jlow              #+#    #+#             */
/*   Updated: 2023/05/26 20:51:30 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-1 * n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// #include <stdio.h>
// #include <unistd.h>

// int main(void)
// {
// 	int	n = 42;
// 	int	fd = 1;

// 	ft_putnbr_fd(n, fd);
// 	return (0);
// }