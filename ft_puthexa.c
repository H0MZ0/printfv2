/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:41:17 by hakader           #+#    #+#             */
/*   Updated: 2024/11/26 21:23:33 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nb, char *base)
{
	if (nb == 0)
	{
		ft_putchar(48);
		return (1);
	}
	else
	{
		ft_puthexa(nb / 16, base);
		ft_puthexa(nb * 16, base);
	}
	return (ft_hexalen(nb));
}