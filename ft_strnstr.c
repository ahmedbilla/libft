/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:15:56 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 03:25:35 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *str_to_find, size_t len){
    size_t i = 0;
    size_t j;

    if (!str_to_find)
    {
        return (char *)str;
    }

    while (str[i] != '\0' && i < len)
    {
        j = 0;
        while (str[i + j] != '\0' && str_to_find[j] != '\0' && str[i + j] == str_to_find[j] && (i + j) < len)

            j++;
        if (str_to_find[j] == '\0')
            return (char *)&str[i];
        i++;
    }
    return NULL;
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char *str = "Hello World";
//     const char *to_find = "World";
//     size_t len = 11;
//     printf("Result: %s\n", ft_strnstr(str, to_find, len));
//     printf("Result original: %s\n", strnstr(str, to_find, len));
//     // Expected: "World"
// }
