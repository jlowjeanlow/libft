/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:24:18 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 22:43:20 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//seperate input string into substring whenever encounter delimeter character
//count the number of words && skip until it meet the next delimeter
//count the len of each word
//allocate memory for array of strings (big)
// 2nd if statement - to copy the words into ptr
//result[count] is the smaller array = 0 means the 1st word "hello"
//s + len to update s to point to the next word

#include "libft.h"
#include <stdio.h>

static size_t	wordcount(char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static size_t	wordlen(char *s, char c)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	len;

	if (!s)
		return (NULL);
	count = wordcount((char *)s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	count = 0;
	if (result != NULL)
	{
		while (*s)
		{
			if (*s != c)
			{
				len = wordlen((char *)s, c);
				result[count++] = ft_substr((char *)s, 0, len);
				s = s + len;
			}
			else
				s++;
		}
		result[count] = NULL;
	}
	return (result);
}

// #include <stdio.h>

// int main()
// {
//     const char *str = "  tripouille  42  ";
//     char delimiter = ' ';
//     char **words = ft_split(str, delimiter);

//     if (words == NULL) {
//         printf("Splitting failed!\n");
//         return 1;
//     }

//     // Print the words
//     int i = 0;
//     while (words[i] != NULL) {
//         printf("%s\n", words[i]);
//         free(words[i]); // Free the memory allocated for each word
//         i++;
//     }

//     free(words); // Free the memory allocated for the array of words

//     return 0;
// }
