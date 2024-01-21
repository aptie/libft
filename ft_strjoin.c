/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:36:52 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/20 15:03:15 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*catstr;
	int		len;
	int		i;
	int		j;

	len = (ft_strlen(str1) + ft_strlen(str2));
	catstr = (char *)malloc((len +1) * sizeof(char));
	if (!catstr)
		return (NULL);
	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		catstr[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
	{
		catstr[i + j] = str2[j];
		j++;
	}
	catstr[i + j] = '\0';
	return (catstr);
}

// int	main()
// {
// 	const char	*str1 = "I am";
// 	const char	*str2 = "a bad-ass mo'fcker";

// 	printf("substring = %s", ft_strjoin(str1, str2));
// }