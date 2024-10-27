/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:42:29 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/23 00:04:40 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i = 0;
    while (str[i] != '\0' && str[i] != c)
    {
        i++;
    }
    if (str[i] == c)
    {
        return (char *)&str[i];
    }
    if (c == '\0')
    {
        return (char *)&str[i];
    }
    else
    {
        return NULL;
    }
}
#include <string.h>

int main()
{
    printf("my fun %s\n", ft_strchr("hlmmn", 'm'));
    printf("%s", strchr("hlmmn", 'm'));
}