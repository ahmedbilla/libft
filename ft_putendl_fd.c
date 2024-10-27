/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:59:25 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 01:04:05 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
    int i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}
// int main()
// {
//     char s[] = "ahmed";
//     ft_putendl_fd(s, 1);
// }