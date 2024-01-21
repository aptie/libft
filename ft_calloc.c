/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:34:54 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 20:57:22 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			mem_size;
	unsigned char	*allocated;

	allocated = malloc(1);
	mem_size = (nmemb * size);
	if (mem_size == 0)
	{
		if (allocated == NULL)
			return (NULL);
		allocated[0] = '\0';
		return (allocated);
	}
	allocated = malloc(mem_size);
	if (allocated != NULL)
		ft_memset(allocated, 0, mem_size);
	return (allocated);
}

// {
// 	unsigned char	*str;
// 	unsigned char	c;
// 	size_t			memory_size;
// 	size_t			j;

// 	j = 0;
// 	c = 0;
// 	memory_size = count * size;
// 	if (memory_size == 0)
// 	{
// 		if ((str = malloc(1)) == NULL)
// 			return (NULL);
// 		str[0] = '\0';
// 		return (str);
// 	}
// 	if ((str = malloc(memory_size)) == NULL)
// 		return (NULL);
// 	while (--memory_size)
// 		str[j++] = c;
// 	str[j] = c;
// 	return ((void*)str);
// }