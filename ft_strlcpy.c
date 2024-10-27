/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:49:02 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 03:21:30 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
size_t ft_strlcpy(char *dest, char *src, size_t size)

{
    size_t i = 0;
    size_t j = 0;
    size_t lenght;

    if (!src && !dest)
    {
        return 0;
    }
    lenght = ft_strlen(src);

    if (size != 0)
    {

        while (src[i] != '\0' && i < size - 1)
        {
            dest[j] = src[i];
            i++;
            j++;
        }
        dest[j] = '\0';
    }
    
    
    return lenght;
}
// int main()
// {
//     char dest[10];
//     char src[20] = "ahmed";
//     printf("%zu", ft_strlcpy(dest, src, 4));
// }
