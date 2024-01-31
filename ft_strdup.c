/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:28:44 by jlow              #+#    #+#             */
/*   Updated: 2023/05/24 21:04:37 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//i + 1 to allocate '\0'
//ptr[i] = s[i]; // Copy character from s to ptr

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	char	*s;
	int		i;

	s = (char *)s1;
	i = 0;
	while (s[i] != '\0')
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() {
//     const char *original = "Hello, world!";
//     char *duplicate = strdup(original);

//     if (duplicate != NULL) {
//         printf("Original: %s\n", original);
//         printf("Duplicate: %s\n", duplicate);
//			free(duplicate); // Remember to free the allocated memory
//     }

//     return 0;
// }
