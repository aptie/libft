/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:36:18 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/16 17:28:57 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*dest_copy;
	char	*src_copy;

	i = 0;
	dest_copy = (char *)dest;
	src_copy = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest != src)
	{
		while (i < len)
		{
			dest_copy[i] = src_copy[i];
			i++;
		}
	}
	return (dest_copy);
}
