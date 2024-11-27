/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:42:51 by hakader           #+#    #+#             */
/*   Updated: 2024/11/27 16:15:58 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *src, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, src);
	while (src[i] != '\0')
	{
		if (src[i] != '%')
			ft_putchar(src[i]);
		else if (src[i] == '%' && src[i] != '\0')
		{
			i++;
			ft_check(args, src[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
