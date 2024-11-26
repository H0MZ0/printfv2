/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:28:32 by hakader           #+#    #+#             */
/*   Updated: 2024/11/26 21:38:58 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_valid_format(char c)
{
	int		i;
	char	valid[] = "cspdiuxX%";

	i = 0;
	while (valid[i])
	{
		if (c == valid[i])
			return (1);
		i++;
	}
	return (0);
}
