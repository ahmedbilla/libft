/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:56:18 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/25 14:55:47 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *array;
    size_t i = 0;
    size_t j = 0;
    if (!s)
        return 0;
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    if (start >= ft_strlen(s))
    {
        array = (char *)malloc(sizeof(char));
        if (array != NULL)
        {
            array[0] = '\0';
        }
        return array;
    }
    array = (char*)malloc((len + 1) * sizeof(char));
    if (array == NULL)
        return NULL;
    while (s[i])
    {
        if (i >= start && j < len)
        {
            array[j] = s[i];
            j++;
        }
        i++;
    }
    array[j] = '\0';
    return array;
}
// int main()
// {
//     char s[] = "Hello, World!";
//     printf("%s", ft_substr(s, 14, 5));
// }