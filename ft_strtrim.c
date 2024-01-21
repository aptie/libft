/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:37:05 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/20 15:04:56 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

int	ft_find(char strc, char const *setchar)
{
	int	i;

	i = 0;
	while (setchar[i] != '\0')
	{
		if (setchar[i] == strc)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str1, char const *set)
{
	char	*trimmed;
	int		i;
	int		start;
	int		end;

	end = ft_strlen(str1);
	start = 0;
	i = 0;
	while (str1[start] != '\0' && ft_find(str1[start], set))
		start++;
	while (end > start && ft_find(str1[end - 1], set))
		end--;
	trimmed = malloc((end - start + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmed[i] = str1[start];
		start++;
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

// int	main()
// {
// 	const char	*str1 = "I am a bad-ass mo'fcker,I am";
// 	const char	*set = "Iam";

// 	printf("substring = %s", ft_strtrim(str1, set));
// }