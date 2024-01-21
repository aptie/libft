/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:34:54 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 19:38:45 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*allocated;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tot_size = nmemb * size;
	allocated = malloc(tot_size);
	if (allocated != NULL)
		ft_memset(allocated, 0, tot_size);
	return (allocated);
}
