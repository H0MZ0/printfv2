/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 09:52:04 by hakader           #+#    #+#             */
/*   Updated: 2024/11/30 16:18:16 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_check(va_list args, char c);
int		ft_hexalen(unsigned int nb);
int		ft_printf(const char *src, ...);
int		ft_putchar(char c);
int		ft_putad(long long src);
int		ft_puthexa(unsigned int nb, char *base);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putunbr(unsigned int n);
int		ft_valid_format(char c);

#endif