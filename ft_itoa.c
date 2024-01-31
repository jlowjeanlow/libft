/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 19:43:43 by jlow              #+#    #+#             */
/*   Updated: 2023/05/26 17:19:18 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//integer to ascii so cannot use strlen
//no do math

#include "libft.h"

size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nb_len(n);
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	if (n == 0)
		ptr[0] = '0';
	ptr[i] = '\0';
	while (n)
	{
		ptr[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(987654321));
// 	printf("%s\n", ft_itoa(-123456789));
// }