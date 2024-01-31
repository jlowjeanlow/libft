/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:27:42 by jlow              #+#    #+#             */
/*   Updated: 2023/05/26 19:49:55 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fd: file descriptor represt file or output device where data will be written
//buf: A pointer to the data that will be written
//count: The number of bytes to write from the buffer

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
