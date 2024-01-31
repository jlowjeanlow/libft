/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:49:43 by jlow              #+#    #+#             */
/*   Updated: 2023/06/02 16:48:18 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ascii to integer (string to integer)
//no do math, " --123ab46" = 0

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*ptr;
	int		i;
	int		result;
	int		sign;

	ptr = (char *) str;
	i = 0;
	result = 0;
	sign = 1;
	while (ptr[i] == 32 || (ptr[i] >= 9 && ptr[i] <= 13))
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		result = (result * 10) + (ptr[i] - 48);
		i++;
	}
	return (sign * result);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d\n", ft_atoi("12ab34"));
// 	printf("%d", ft_atoi(" -1234ab567"));
// }