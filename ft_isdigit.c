/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:35:10 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/21 20:16:39 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2048);
	return (0);
}

// int	main()
// {
// 	int i = -1;
// 	while (i < 530)
// 	{
// 		if (ft_isdigit(i) != isdigit(i))
// 		{
// 			printf("not the same!");
// 			printf("i = %i ", i);
// 			printf("ft = %i ", ft_isdigit(i));
// 			printf("or = %i \n", isdigit(i));
// 		}
// 		i++;
// 	}
// }