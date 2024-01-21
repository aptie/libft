/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:36:48 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/16 17:26:58 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*new_str;
	size_t	len;

	if (!str)
		return (NULL);
	new_str = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
	if (!str)
		return (NULL);
	len = 0;
	while (str[len])
	{
		new_str[len] = str[len];
		len++;
	}
	new_str[len] = 0;
	return (new_str);
}
