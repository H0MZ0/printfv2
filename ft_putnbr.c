/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:45:46 by hakader           #+#    #+#             */
/*   Updated: 2024/11/30 14:03:52 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = ft_nlen(n);
	if (n == -2147483648)
		ft_putstr ("-2147483648");
	else if (n < 0)
	{
		ft_putchar ('-');
		n = -n;
		ft_putnbr(n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (len);
}
