/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:00:50 by ybouchra          #+#    #+#             */
/*   Updated: 2023/02/20 11:56:31 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		s = "(null)";
	}
	while (*s)
	{
		len += ft_putchar(*s);
		s++;
	}
	return (len);
}
