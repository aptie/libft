/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:36:14 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/16 14:51:46 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)

{
	unsigned char	*mem;
	unsigned char	check;
	size_t			i;

	mem = (unsigned char *)s;
	check = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		if (*(mem + i) == check)
			return (mem + i);
		i++;
	}
	return (0);
}
