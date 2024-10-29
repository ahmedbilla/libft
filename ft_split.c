/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:20:01 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/28 01:07:40 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
		{
			str++;
		}
		if (*str != '\0')
		{
			count++;
			while (*str && *str != c)
			{
				str++;
			}
		}
	}
	return (count);
}

void	ft_free(char **arr)
{
	int	i;

	i = 0;
	while (!arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*copy_word(const char *start, const char *end)
{
	int		length;
	int		i;
	char	*word;

	length = end - start;
	i = 0;
	word = (char *)malloc(length + 1);
	if (!word)
	{
		return (NULL);
	}
	if (word)
	{
		while (i < length)
		{
			word[i] = start[i];
			i++;
		}
		word[length] = '\0';
	}
	return (word);
}

char	**ft_split(const char *str, char c)
{
	int		word_count;
	char	**res;
	int		i;
	const char *word_start;

	if (!str)
	{
		return (NULL);
	}
	word_start = NULL;
	i = 0;
	word_count = count_words(str, c);
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	while (*str)
	{
		if (*str == c)
		{
			if (word_start != NULL)
			{
				res[i++] = copy_word(word_start, str);
				word_start = NULL;
				if (!res[i])
				{
					ft_free(res);
					return (NULL);
				}
			}
		}
		else
		{
			if (!word_start)
				word_start = str;
		}
		str++;
	}
	if (word_start)
		res[i++] = copy_word(word_start, str);
	res[i] = NULL;
	return (res);
}

#include <stdio.h>
// int main() {
//     const char *str = "hello";
//     char **words = ft_split(str, ' ');

// if(!words){
//     printf("NON");
//     return 0;
// }
// int i = 0;
//         while (words[i] != NULL)
//         {
//             printf("%s\n", words[i]);
//             i++;
//         }
// }
