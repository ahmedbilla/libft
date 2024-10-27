/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:32:08 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 05:03:50 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

 size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
 {
    size_t i = ft_strlen(dst);
    size_t j =  ft_strlen(src);
    size_t xdst = 0;
    if (dstsize == 0 || dstsize <= i)
    {
        return dstsize + j;
    }
    xdst = i;
    i = 0;
    while (src[i] != '\0' && i < dstsize - xdst - 1)
    {
        dst[xdst] = src[i];
        i++;
        xdst++;
    }
    dst[xdst] = '\0';
    return (j + xdst);
 }
 
//  int main()
//  {
//     printf("%zu",ft_strlcat("hello", "world", 0));
//  }