/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:51:43 by ybouchra          #+#    #+#             */
/*   Updated: 2023/02/20 11:34:55 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned long nb, char c)
{
	char	*all;
	int		len;

	len = 0;
	if (c == 'X')
		all = "0123456789ABCDEF";
	else
		all = "0123456789abcdef";
	if (nb < 16)
		len += ft_putchar(all[nb]);
	else
	{
		len += ft_puthex(nb / 16, c);
		len += ft_puthex(nb % 16, c);
	}
	return (len);
}
