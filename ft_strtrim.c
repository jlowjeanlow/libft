/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlow <jlow@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:08:28 by jlow              #+#    #+#             */
/*   Updated: 2023/05/26 22:01:04 by jlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[len - 1]) && len >= 0)
		len--;
	return (ft_substr(s1, i, len - i));
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_strtrim("yyabqbcayy", "abc"));
// 	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
// 	return 0;
// }