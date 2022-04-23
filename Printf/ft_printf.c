#include "ft_printf.h"
#include "ft_fonk1.c"
int	ayirici(va_list arg,int c)
{
	char	*str;
	int		len;

	len = 0;
	if (c == 'c')
		len += ft_char(va_arg(arg,int));
	if (c == 's')
		len += ft_string(va_arg(arg,char *));
	if (c == 'i' || c == 'd')
	{
		str = ft_itoa(va_arg(arg,int));
		len = ft_string(str);
		free(str);
	}
	if (c == 'u')
		len = ft_itoa_u(va_arg(arg,int));
	if (c == 'x' || c == 'X')
		len = ft_hex(va_arg(arg,unsigned int), c);
	else if (c == '%')
	{
		ft_char('%');
		len = len + 1;
		return (len);
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg,str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ayirici(arg,str[i]);
		}
		else
		{
			ft_putchar_fd2(str[i]);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
