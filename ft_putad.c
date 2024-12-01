/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:50:35 by hakader           #+#    #+#             */
/*   Updated: 2024/12/01 19:58:47 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_hexlen(unsigned long long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		i++;
		nb /= 16;
	}
	return (i);
}

static int	ft_putexa(unsigned long long nb, char *base)
{
	if (nb == 0)
		return (ft_putchar('0'));
	else if (nb > 0 && nb <= 15)
		ft_putchar(base[nb]);
	else
	{
		ft_putexa(nb / 16, base);
		ft_putexa(nb % 16, base);
	}
	return (ft_hexlen(nb));
}

int	ft_putad(long long src)
{
	int	length;

	length = 0;
	if (src == 0)
		return (ft_putstr("(nil)"));
	ft_putstr("0x");
	if (!src)
		return (ft_putchar('0'));
	else
		length = ft_putexa(src, "0123456789abcdef");
	return (length + 2);
}
