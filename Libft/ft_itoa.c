/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:02:07 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/16 13:14:05 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	uzunluk(int n)
{
	int	i;

	if (n == -0)
		return (0);
	i = 1;
	if (n < 0)
		n = n * -1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*negative(int n, char *p, int x)
{
	x = x + 1;
	p[0] = '-';
	n = n * -1;
	p[x--] = '\0';
	while (n > 9)
	{
		p[x] = '0' + (n % 10);
		n = n / 10;
		x--;
	}
	p[x] = n + '0';
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		x;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	x = uzunluk(n);
	p = malloc(sizeof(char *) * x + 1);
	if (!p)
		return (0);
	p[x] = '\0';
	if (n > 0)
	{
		while (n > 0)
		{
			p[--x] = '0' + (n % 10);
			n = n / 10;
		}
		return (p);
	}
	else
	{
		p = negative(n, p, x);
		return (p);
	}
}
