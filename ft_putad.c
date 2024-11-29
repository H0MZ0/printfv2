/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:50:35 by hakader           #+#    #+#             */
/*   Updated: 2024/11/29 19:06:07 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putad(void *src)
{
	int	lenght;

	ft_putstr("0x");
	if (src == NULL)
		ft_putchar('0');
	else
		lenght = ft_puthexa(src);
	return (lenght);
}
