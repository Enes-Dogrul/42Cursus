#include "ft_printf.h"

/*int	ft_char(int c)
{
	write(1,&c,1);
	return (1);
}*/

static int	ft_len(unsigned int i)
{
	int	j;
	j = 0;
	while (i)
	{
		i = i / 16;
		j++;
	}
	return (j);
}
static void	ft_fazla_uzun(unsigned int x, int j)
{
	if (j == 'X')
		ft_char((x - 10) + 'A');
	else
		ft_char((x - 10) + 'a');
}
int	ft_hex(unsigned int x, int j)
{
	int	l;
	l = ft_len(x);
	if (x == 0)
	{
		write(1, "0", 1);
		return (l + 1);
	}
	else
	{
		if (x >= 16)
		{
			ft_hex((x / 16), j);
			ft_hex((x % 16), j);
		}
		else
		{
			if (x <= 9)
				ft_char(x + '0');
			else
				ft_fazla_uzun(x, j);
		}
	}
	return (l);
}
