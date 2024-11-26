/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:31:33 by hakader           #+#    #+#             */
/*   Updated: 2024/11/26 21:33:07 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_check(char *src)
{
	int	i;

	i = 0;
	if (src[i] == '%')
	{
		i++;
		if (src[i] == 'c')
			ft_putchar(&src);
		if (src[i] == 's')
			ft_putstr(*src);
		if (src[i] == 'p')
		if (src[i] == 'd')
			ft_putnbr(src);
		if (src[i] == 'i')
			ft_putunbr(src);
		if (src[i] == 'u')
			ft_putunbr(src);
		if (src[i] == 'x')
			ft_puthexa();
		if (src[i] == 'X')
			ft_puthexa();
		if (src[i] == '%')
			ft_putchar('%');
	}
}