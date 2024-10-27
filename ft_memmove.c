/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:06:01 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 06:15:03 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    size_t i = 0;

    if (d > s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }

    else
    {
        ft_memcpy(d, s, n);
    }
    return dest;
}
// #include <string.h>
// int main()
// {
//     char buffer[] = "ABCDEFG";
    
    
//     printf("%s\n",ft_memmove(buffer + 2, buffer, 5));
//        printf("%s\n",memmove(buffer + 2, buffer, 5));
// }