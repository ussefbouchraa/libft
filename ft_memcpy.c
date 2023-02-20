/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:15:39 by ybouchra          #+#    #+#             */
/*   Updated: 2022/11/25 04:51:05 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*surc;
	unsigned char	*dust;
	size_t			i;

	i = 0;
	surc = (unsigned char *)src;
	dust = (unsigned char *)dst;
	if (!surc && !dust)
		return (0);
	while (n > i)
	{
		dust[i] = surc[i];
		i++;
	}
	return (dust);
}
