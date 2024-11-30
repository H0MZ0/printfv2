/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:31:33 by hakader           #+#    #+#             */
/*   Updated: 2024/11/30 16:17:12 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list args, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (c == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		i = ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		i = ft_puthexa(va_arg(args, int), "0123456789abcdef");
	else if (c == 'X')
		i = ft_puthexa(va_arg(args, int), "0123456789ABCDEF");
	else if (c == 'p')
		i = ft_putad(va_arg(args, long long));
	else if (c == 'u')
		i = ft_putunbr(va_arg(args, int));
	else if (c == '%')
		i = ft_putchar('%');
	return (i);
}
