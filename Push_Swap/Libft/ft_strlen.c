/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:13:12 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/05 12:04:02 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (str[i] != '\0')
	{
		a++;
		i++;
	}
	return (a);
}
/*int main()
{
    char a[]="Ahmet";
    printf("%s",a);
}*/
