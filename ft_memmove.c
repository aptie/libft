/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:36:21 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/16 17:38:38 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// The  memmove()  function  copies len bytes from 
// memory area src to memory area dest.  
// The memory areas may overlap: copying takes place as though
// the  bytes in src are first copied into a temporary array 
// that does not overlap src or dest, 
// the bytes are then copied from  the  temporary array to dest.

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
