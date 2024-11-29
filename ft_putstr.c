/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:08:28 by hakader           #+#    #+#             */
/*   Updated: 2024/11/29 19:46:12 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	len;
	int	valid_len;

	i = 0;
	len = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		valid_len = ft_putchar(s[i]);
		if (valid_len < 0)
			return (-1);
		len += valid_len;
		i++;
	}
	return (len);
}
