#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_char(int c);
int	ayirici(va_list arg,int c);
int	ft_putchar_fd2(char c);
int	ft_string(char *str);
int	ft_itoa_u(unsigned int a);
int	ft_isayac(unsigned int a);
int	ft_hex(unsigned int x, int j);

#endif
