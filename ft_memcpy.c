/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:22:03 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/25 19:19:33 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    size_t i = 0;

    if (!d && !s)
    {
        return NULL;
    }

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
#include <string.h>
// int main()
// {
//     char d[15] = "hello";
//     char s[15] = "wor";
//     printf ("%s \n", ft_memcpy(d, s, 5));
//     printf (">>>>%s", memcpy(d, s, 5));
// }