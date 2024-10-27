/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:20:55 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 03:24:23 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    
    if(n == 0)
    {
        return 0;
    }
    while ((s1[i] != '\0' && s2[i]  != '\0' && s1[i] == s2[i]) && i < n - 1)
    {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
// int main()
// {
//     char s1[5] = "bhmed";
//     char s2[5] = "ahmed";

//     printf("%d" , ft_strncmp(s1, s2, 2));
// }