/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:43:04 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 05:04:15 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int c, size_t n)
{
    unsigned char *p = (unsigned char *)ptr;
    size_t i = 0;
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (ptr);
}


// int main()
// {
    // int res;
    // ft_memset(&res, 255, 4);
    // ft_memset(&res, 255, 3);
    // ft_memset(&res, 255, 2);
    // ft_memset(&res, 214, 1);
    // printf("%d\n", res);
//     void *f;
//     printf("%lu\n" , sizeof(f));
// }