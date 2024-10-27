/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:58:36 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 04:58:25 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
// #include <string.h>
// int main()
// {
//     char s1[50] = "ahgmed";
//     char s2[50] = "ahmed";

//     printf("%d", ft_memcmp(s1, s2, 4));
//     printf("%d", memcmp(s1, s2, 4));
// }