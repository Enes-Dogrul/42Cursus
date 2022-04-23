/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:37:31 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/14 16:27:58 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if ((char *)dest < (char *)src)
	{
		while (n--)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if ((char *)src < (char *)dest)
	{
		i = n;
		i--;
		while (n--)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dest);
}
