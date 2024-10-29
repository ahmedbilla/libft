/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:16:59 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/28 22:56:07 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	size_t len = 5;
// int i = 0;

// 	ft_bzero(str, len);
// 	while(str[i] <len)
// 	{
// 	if(str[i] == 0)
// 	{
// 		printf("0");
// 	}
// i++;
// 	}
// 	return 0;
// }