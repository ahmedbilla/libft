/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:54:44 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/27 10:33:54 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen( char *str)
{
    size_t i  = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
    
}
// int main()
// {
//     char a[] = "ahmed";
//     printf("%zu", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaa"));
//     }