/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbilla <ahbilla@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:51:13 by ahbilla           #+#    #+#             */
/*   Updated: 2024/10/26 04:41:50 by ahbilla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = (count * size);
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
// #include <string.h>
// int main()
// {
//     int *arr = ft_calloc(9, sizeof(char));
//     for (int i = 0; i < 9; i++)
//     {
//         printf("%i", arr[i]);
//     }
// }