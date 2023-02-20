/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:13:57 by ybouchra          #+#    #+#             */
/*   Updated: 2023/02/20 11:56:18 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putptr(unsigned	long nbr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_puthex(nbr, 'x');
	return (len);
}
