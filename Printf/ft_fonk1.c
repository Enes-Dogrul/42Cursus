#include "ft_printf.h"
#include <unistd.h>

int	ft_char(int c)
{
	write(1,&c,1);
	return (1);
}
int	ft_putchar_fd2(char str)
{
	write(1,&str,1);
	return (1);
}
int	ft_string(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (ft_string("(null)"));
	while(str[i])
		i += ft_char(str[i]);
	return (i);
}
int	ft_itoa_u(unsigned int a)
{
	int	len;
	char	*b;

	len = ft_isayac(a);
	b = (char *)malloc(sizeof(char) * len + 1);
	b[len] = '\0';
	while (len > 0)
	{
		b[len - 1] = a % 10 + 48;
		a = a / 10;
		len--;
	}
	len = ft_string(b);
	free(b);
	return (len);
}
int	ft_isayac(unsigned int a)
{
	int i;

	i = 0;
	while(a >= 10)
	{
		a = a / 10;
		i++;
	}
	return (i + 1);
}
