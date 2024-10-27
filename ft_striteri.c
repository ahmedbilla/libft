/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:30:14 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 05:02:56 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i = 0;
  
    if(!s || !f)
    {
        return ;
    }
    
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

// void to_uppor(unsigned int i, char *s)
// {
//     if(*s >= 'a' && *s <= 'z')
//     {
//         *s -= 32;
//     }
// }

// int main()
// {
//     char s[] = "hello";
//     ft_striteri(s, to_uppor);
//     printf("%s", s);
// }