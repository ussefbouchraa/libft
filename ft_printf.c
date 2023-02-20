/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 00:15:17 by ybouchra          #+#    #+#             */
/*   Updated: 2023/02/20 11:34:43 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arg(const char *format, va_list last_arg, int *len)
{
	if (*format == 'c')
		*len += ft_putchar(va_arg(last_arg, int));
	else if (*format == 'd' || *(format) == 'i')
		*len += ft_putnbr(va_arg(last_arg, int));
	else if (*format == 's')
		*len += ft_putstr(va_arg(last_arg, char *));
	else if (*format == 'x')
		*len += ft_puthex(va_arg(last_arg, unsigned int), 'x');
	else if (*format == 'X')
		*len += ft_puthex(va_arg(last_arg, unsigned int), 'X');
	else if (*format == 'p')
		*len += ft_putptr(va_arg(last_arg, unsigned long));
	else if (*format == 'u')
		*len += ft_putunsigned(va_arg(last_arg, unsigned int));
	else
		*len += ft_putchar(*format);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	last_arg;

	va_start(last_arg, format);
	len = 0;
	while (*format)
	{	
		if (*format == '%' && *(format + 1) != '\0')
			ft_arg(++format, last_arg, &len);
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(last_arg);
	return (len);
}
