/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:34:47 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/20 10:51:30 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_bzero(void *s, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	return (s);
}
