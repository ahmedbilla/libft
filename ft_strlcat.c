/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:32:08 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/29 21:49:12 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	total_length;

	i = 0;
	len_dst = ft_strlen(dst);
	j = len_dst;
	total_length = len_dst + ft_strlen(src);
	if (j >= size)
		return (total_length - (j - size));
	while (src[i] != '\0' && (i + len_dst) < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (total_length);
}
// #include <string.h>
// int main()
// {
// 	char str[] = "hello";
// 	printf("%zu\n", ft_strlcat(NULL, str, 0));
// 	// printf("%lu\n", strlcat(NULL, str, 0));
// 	return (0);
// }