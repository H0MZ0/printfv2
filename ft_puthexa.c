/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:41:17 by hakader           #+#    #+#             */
/*   Updated: 2024/11/29 01:05:03 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nb, char *base)
{
	if (nb >= '0' && nb <= '9')
	{
		ft_putchar(nb + 48);
		return (1);
	}
	else
	{
		ft_putchar(base[nb]);
	}
	if (nb >= 16)
	{
		ft_puthexa(nb / 16, base);
		ft_puthexa(nb % 16, base);
	}
	return (ft_hexalen(nb));
}
