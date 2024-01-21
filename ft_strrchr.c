/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:37:03 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 19:06:08 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*str1;
	char	c1;

	str1 = (char *)str;
	c1 = (char)c
	while (*str1 != c1)
	{
		if (*str1 == '\0')
		{
			return (NULL);
		}
		str1++;
	}
	return (str1);
}
