/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:35:07 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 20:16:44 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main()
// {
// 	int i = -1;
// 	while (i < 530)
// 	{
// 		if (ft_isascii(i) != isascii(i))
// 		{
// 			printf("not the same!");
// 			printf("i = %i ", i);
// 			printf("ft = %i ", ft_isascii(i));
// 			printf("or = %i \n", isascii(i));
// 		}
// 		i++;
// 	}
// }