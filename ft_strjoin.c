/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:56:50 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/25 15:54:07 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
    char *arr;
    size_t i = 0;
    size_t j = 0;

    if (!s1 && !s2)
    {
        return NULL;
    }

    arr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));

    if (!arr)
    {
        return NULL;
    }

    while (s1[i] != '\0')
    {
        arr[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        arr[i] = s2[j];
        j++;
        i++;
    }
    arr[i] = '\0';
    return arr;
}
// int main()
// {
//     char s1[] = "hello";
//     char s2[] = "world";
//     printf("%s", ft_strjoin(s1, s2));
// }