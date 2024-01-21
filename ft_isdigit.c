/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poude-vr <poude-vr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:35:10 by poude-vr          #+#    #+#             */
/*   Updated: 2024/01/04 15:13:30 by poude-vr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(unsigned char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
