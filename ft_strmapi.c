/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:37:01 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/20 23:50:53 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*str1;
	size_t	i;

	str1 = ft_strdup(str);
	if (!str1)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		str1[i] = (*f)(i, str1[i]);
		i++;
	}
	return (str1);
}
