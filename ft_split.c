/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:36:40 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/20 23:18:01 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static size_t	ft_wordcount(char const *str, char c)
{
	size_t	count;

	if (!*str)
		return (0);
	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (count);
}

size_t	end_word(size_t i, char const *str, char c)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	size_t	i;
	size_t	end;
	size_t	word;

	split = (char **)malloc((ft_wordcount(str, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		end = end_word(i, str, c);
		if (end > i)
		{
			split[word] = ft_substr(str, i, (end - i));
			i = end;
			word++;
		}
	}
	split[word] = NULL;
	return (split);
}

// int	main()
// {
// 	const char	*str1 = "lorem ipsum dolor sit 
	// amet, consectetur adipiscing elit. 
	// Sed non risus. Suspendisse lectus tortor, 
	// dignissim sit amet, adipiscing nec,
	//  ultricies sed, dolor. Cras elementum 
	// ultricies diam. Maecenas ligula massa, 
	// varius a, semper congue, euismod non, mi.";
// 	const char	delimiter = 'z';
// 	int	i = 0;
// 	char **split = ft_split(str1, delimiter);
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}

// }
