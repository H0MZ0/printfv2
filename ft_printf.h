#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int ft_check(char *src);
int	ft_hexalen(unsigned int nb);
int ft_printf(const char *src, ...);
int	ft_putchar(char c);
int	ft_puthexa(unsigned int nb, char *base);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);
int ft_valid_format(char c);

#endif