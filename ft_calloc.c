/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:57:19 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 19:30:30 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	s = (char *)malloc(size * count);
	if (!s)
		return (NULL);
	ft_bzero(s, (count * size));
	return (s);
}

// #include <stdio.h>

// int main(void)
// {
//     int    *numbers;
//     int    count = 5;

//     printf("Before calloc:\n");
//     for (int i = 0; i < count; i++) {
//         printf("Address: %p, Value: %d\n", (void*)&numbers[i], numbers[i]);
//     }

//     numbers = (int*)ft_calloc(count, sizeof(int));

//     if (numbers != NULL) {
//         printf("\nAfter calloc:\n");
//         for (int i = 0; i < count; i++) {
// 			printf("Address: %p, Value: %d\n", (void*)&numbers[i], numbers[i]);
//         }

//         free(numbers); // Don't forget to free the allocated memory when done
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }