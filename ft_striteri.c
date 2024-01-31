/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:08:10 by jlow              #+#    #+#             */
/*   Updated: 2023/05/26 19:41:26 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}

// #include <stdio.h>

// void incrementCharacter(unsigned int index, char *c)
// {
//     *c += index;
// }

// int main()
// {
//     char string[] = "Hello, World!";

//     printf("Original string: %s\n", string);

//     ft_striteri(string, incrementCharacter);

//     printf("Modified string: %s\n", string);

// 	return (0);
// }