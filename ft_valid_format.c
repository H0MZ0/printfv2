#include "ft_printf.h"

int ft_valid_format(char c)
{
    int i = 0;
    char valid[] = "cspdiuxX%";
    while (valid[i])
    {
        if (c == valid[i])
            return (1);
        i++;
    }
    return (0);
}
