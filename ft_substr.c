/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:37:07 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 19:15:06 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	real_len;
	char	*sub;

	if (!str)
		return (NULL);
	if ((unsigned int)ft_strlen(str) < start)
		return (ft_strdup(""));
	real_len = ft_strlen(str + start);
	if (real_len < len)
		len = real_len;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
// int	main()
// {
// 	const char	*s = "hola";
// 	int		start = 2;
// 	size_t	len = 30;

// 	printf("substring = %s", ft_substr(s, start, len));
// }