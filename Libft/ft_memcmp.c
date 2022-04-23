/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:36:24 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/07 17:07:44 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			z;

	a = (unsigned char *)ptr1;
	b = (unsigned char *)ptr2;
	z = 0;
	while (z < n)
	{
		if (a[z] != b[z])
			return (a[z] - b[z]);
		z++;
	}
	return (0);
}
