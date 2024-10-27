/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:54:48 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/25 18:19:00 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_set(char c, char const *set)
{
    int i = 0;
    while (set[i])
    {
        if (c == set[i])
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *str, char const *set)
{
    if (!str || !set)
    {
        return NULL;
    }
    size_t lenght = ft_strlen(str);

    char *arr;
    size_t start = 0;
    size_t j = 0;
    size_t end = lenght;
    while (str[start] && is_set(str[start], set))
    {
        start++;
    }

   while (end > start && is_set(str[end - 1], set)) {
        end--;
    }
    arr = (char*)malloc(sizeof(char) * (end - start + 1));
    if (!arr) {
        return NULL;
    }
    while (j < (end - start))
    {
        arr[j] = str[start + j];
        j++;
    }
    arr[end - start] = '\0';
    return arr;
    
}
// int main() {
//     char str[] = "a  ahmed  ";
//     char *tst = ft_strtrim(str, "a");
// printf("%s", tst);
// }