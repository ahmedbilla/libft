/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:55:23 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/25 13:15:05 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i = 0;
    char *last = NULL;
  
    while (str[i] != '\0' && c != '\0')
    {
        if (str[i] == (char)c)
        {
            last = (char *)&str[i];
        }
        i++;
    }
    if (c == '\0')
    {
        return (char *)&str[i];
    }
    return last;
}
// #include <string.h>

// int main() {
//    const char str[] = "Hello, World!";
//    const char ch = 'W';
//    char* ptr = ft_strrchr(str + 7, ch); 

//    if (ptr) {
//        printf("'%c' found at position %ld\n", ch, ptr - str);
//    } else {
//        printf("'%c' not found in the substring\n", ch);
//    }

//    return 0;
// }