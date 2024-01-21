/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:34:54 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 21:03:00 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	mem_size;
	void	*allocated;

	mem_size = (nmemb * size);
	if (!mem_size)
		return (0);
	allocated = malloc(mem_size);
	if (allocated != NULL)
		ft_memset(allocated, 0, mem_size);
	return (allocated);
}
