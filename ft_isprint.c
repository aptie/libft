/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:35:18 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 20:16:33 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}

// int	main()
// {
// 	int i = -1;
// 	while (i < 530)
// 	{
// 		if (ft_isprint(i) != isprint(i))
// 		{
// 			printf("not the same!");
// 			printf("i = %i ", i);
// 			printf("ft = %i ", ft_isprint(i));
// 			printf("or = %i \n", isprint(i));
// 		}
// 		i++;
// 	}
// }