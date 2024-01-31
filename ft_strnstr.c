/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:50:31 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 16:47:00 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//find the first occurence of the needle within the haystack
//len = limit the search to the length of haystack

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && !len)
		return (NULL);
	if (*needle == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && (i + j) < len && needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
//     const char haystack[] = "world!";
//     const char needle[] = "r";
//     //size_t len = strlen(haystack);

//     char *result = ft_strnstr(haystack, needle, 5);

//     if (result != NULL)
// 	{
// 	     printf("Needle found at position: %ld\n", result - haystack);
// 		printf("Needle found is %s\n", result);
// 	}
//     else
//         printf("Needle not found\n");

//     return 0;
// }