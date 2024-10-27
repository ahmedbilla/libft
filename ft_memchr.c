/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:04:20 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 05:01:04 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	f;
	size_t			i;

	s = (unsigned char *)str;
	f = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == f)
		{
			return ((void *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
// #include <string.h>
// int main()
// {
//     char s[50] = "ahmed";
//     char f = 'e';
//     printf("%s", ft_memchr(s, f, 5));
// }