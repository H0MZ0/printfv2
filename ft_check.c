/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:31:33 by hakader           #+#    #+#             */
/*   Updated: 2024/11/27 16:23:03 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_check(va_list args, char c)
{
	if (c == 'c')
		ft_putchar((char)va_arg(args, int));
	else if (c == 's')
		ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		ft_puthexa((unsigned int)va_arg(args, int), "0123456789abcdef");
	else if (c == 'X')
		ft_puthexa((unsigned int)va_arg(args, int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		ft_putstr("0x");
		ft_puthexa((unsigned int)va_arg(args, int), "0123456789ABCDEF");
	}
	else if (c == 'u')
		ft_putunbr((unsigned int)va_arg(args, int));
	else if (c == '%')
		putchar('%');
}
