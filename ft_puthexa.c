/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:41:17 by hakader           #+#    #+#             */
/*   Updated: 2024/11/29 17:01:08 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nb, char *base)
{
	if (nb >= 0 && nb <= 15)
		ft_putchar(base[nb]);
	else
	{
		ft_puthexa(nb / 16, base);
		ft_puthexa(nb % 16, base);
	}
	return (ft_hexalen(nb));
}
