/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:03:23 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/09 15:47:15 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*last;

	last = malloc(nmemb * size);
	if (!last)
		return (NULL);
	ft_bzero(last, nmemb * size);
	return (last);
}
