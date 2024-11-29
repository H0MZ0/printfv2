/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:50:09 by hakader           #+#    #+#             */
/*   Updated: 2024/11/29 16:05:23 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unlen(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_putunbr(unsigned int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
	}
	return (ft_unlen(n));
}
