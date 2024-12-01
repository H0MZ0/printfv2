/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:42:51 by hakader           #+#    #+#             */
/*   Updated: 2024/12/01 11:43:14 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *src, ...)
{
	int		len;
	int		i;
	va_list	args;

	len = 0;
	i = 0;
	va_start(args, src);
	if (!src)
		return (-1);
	while (src[i] != '\0')
	{
		if (src[i] != '%')
		{
			ft_putchar(src[i]);
			len++;
		}
		else if (src[i] == '%' && src[i + 1] != '\0')
		{
			i++;
			len += ft_check(args, src[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
// int main()
// {
// 	int i = ft_printf("%p", 0);
// 	ft_printf("\n%d\n",i);
// 	int j = printf("%p", 0);
// 	printf("\n%d\n",j);
// }