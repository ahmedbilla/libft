/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:43:04 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/28 22:02:42 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
// int main()
// {
// 	int res;
// 	ft_memset(&res, 0, 4);
// 	ft_memset(&res, 0, 3);
// 	ft_memset(&res, 0, 2);
// 	ft_memset(&res, 5, 1);
// 	printf("%d", res);
// }