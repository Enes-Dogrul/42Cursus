/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:35:07 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/16 13:19:20 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*k;
	unsigned char	e;
	size_t			x;

	x = 0;
	k = (unsigned char *)ptr;
	e = (unsigned char)c;
	while (x < n)
	{
		if (*k == e)
			return (k);
		k++;
		x++;
	}
	return (0);
}
