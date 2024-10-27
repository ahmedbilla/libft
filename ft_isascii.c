/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:37:39 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 04:43:51 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
// int main()
// {
//     int test1 = 'A';
//     int test2 = 128;
//     int test3 = 'z';
//     int test4 = 255;

//     printf("isascii(%c) = %d\n", test1, isascii(test1));
//     printf("isascii(%d) = %d\n", test2, isascii(test2));
//     printf("isascii(%c) = %d\n", test3, isascii(test3));
//     printf("isascii(%d) = %d\n", test4, isascii(test4));

//     return 0;
// }