/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:39:57 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/14 16:27:27 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (!dest && !src)
		return (NULL);
	x = 0;
	while (x < n)
	{
		((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dest);
}
/*int main()
{
	char a[]="Ene";
	char b[40
	memset(b,'\0',40);
	printf("%s",ft_memcpy(b,a,5));
}*/
