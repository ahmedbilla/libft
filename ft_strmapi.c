/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:45:26 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 21:11:42 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (!s || !f)
    {
        
    }
    
    size_t len = ft_strlen(s);
    unsigned int i;

    char *arr = (char *)malloc(sizeof(char) * len + 1);
    if (!arr)
    {
        return NULL;
    }
    i = 0;
    while (i < len)
    {
        arr[i] = f(i, s[i]);
        i++;
    }
    arr[i] = '\0';
    return arr;
}
