/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:50:35 by hakader           #+#    #+#             */
/*   Updated: 2024/12/01 10:41:05 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putexa(unsigned long long nb, char *base)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return (1);
	}
	else if (nb > 0 && nb <= 15)
		ft_putchar(base[nb]);
	else
	{
		ft_putexa(nb / 16, base);
		ft_putexa(nb % 16, base);
	}
	return (ft_hexalen(nb));
}

int	ft_putad(long long src)
{
	int	length;

	length = 0;
	if (src == 0)
	{
		ft_putstr("(nil)");
		return (6);
	}
	ft_putstr("0x");
	if (!src)
		ft_putchar('0');
	else
		length = ft_putexa(src, "0123456789abcdef");
	return (length + 2);
}
