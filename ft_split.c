/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:20:01 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/27 13:20:10 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(const char *str, char c) {
    int count = 0;
    

    while (*str) {
        while (*str == c) {
            str++;
        }
        if (*str != '\0') {
            count++;
            while (*str && *str != c) {
                str++;
            }
        }
    }
    return count;
}
static char *copy_word(const char *start, const char *end) {
    int length = end - start; 
    char *word = (char *)malloc(length + 1); 
    if (word) {
        for (int i = 0; i < length; i++) {
            word[i] = start[i]; 
        }
        word[length] = '\0'; 
    }
    return word;
}
char **ft_split(const char *str, char c)
{
    if (!str)
    {
       return NULL;
    }
    int word_count;
    char **res;
    int index;
    const char *word_start = NULL;
    
    index = 0;
    word_count = count_words(str, c);
    res = (char **)malloc(sizeof(char*) * (word_count + 1));
    if (!res)
    {
       return NULL;
    }
     while (*str) {
        if (*str == c) {
            if (word_start) {
                res[index++] = copy_word(word_start, str); 
                word_start = NULL; 
            }
        } else {
            if (!word_start) {
                word_start = str;
            }
        }
        str++;
    }
    if (word_start) {
        res[index++] = copy_word(word_start, str);
    }
    res[index] = '\0';
    return res;
}