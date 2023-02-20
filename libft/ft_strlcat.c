/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:11:45 by ybouchra          #+#    #+#             */
/*   Updated: 2023/02/20 11:56:52 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize == 0)
		return (len_src);
	i = len_dst;
	j = 0;
	while (dstsize <= i)
		return (len_src + dstsize);
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = 0;
	return (len_dst + len_src);
}
