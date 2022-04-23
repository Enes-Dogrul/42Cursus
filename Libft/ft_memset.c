/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:50:42 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/05 15:10:11 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *kelime, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		((unsigned char *)kelime)[a] = c;
		a++;
	}
	return ((unsigned char *)kelime);
}

/*int main()
{   
	char a[]="yağmur";
	char c='x';
	printf("%s",memset(a,c,4));
    printf("\n");
    //printf("%s",ft_memset(a,c,4));
}*/
