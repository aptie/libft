/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 20:36:12 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 20:19:10 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1024);
	return (0);
}
// int	main()
// {
// 	int i = -1;
// 	while (i < 530)
// 	{
// 		if (ft_isalpha(i) != isalpha(i))
// 		{
// 			printf("not the same!");
// 			printf("i = %i ", i);
// 			printf("ft = %i ", ft_isalpha(i));
// 			printf("or = %i \n", isalpha(i));
// 		}
// 		i++;
// 	}
// }