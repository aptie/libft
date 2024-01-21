/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:37:07 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/20 11:17:34 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	end;

	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	end = start + (unsigned int)len;
	while (i < len && str[start + i] != '\0')
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main()
// {
// 	const char	*s = "motherfacker";
// 	int		start = 6;
// 	size_t	len = 6;

// 	printf("substring = %s", ft_substr(s, start, len));
// }