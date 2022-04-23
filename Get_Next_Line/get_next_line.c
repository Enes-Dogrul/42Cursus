/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <edogrul@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:36:37 by edogrul           #+#    #+#             */
/*   Updated: 2022/02/28 13:36:45 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char 	*yenibaslangic(char *sonbas)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (sonbas[i] != '\0'&&sonbas[i] != '\n')
		i++;
	if(!sonbas[i])
	{
		free (sonbas);
		return (NULL);
	}
	str = malloc(sizeof(char)*(ft_strlen(sonbas) - i));
	if(!str)
		return (NULL);
	i++;
	j = 0;
	while (sonbas[i +j]!='\0')
	{
		str[j]=sonbas[i + j];
		j++;
	}
	str[j] = '\0';
	free (sonbas);
	return (str);
}

char	*anametinbulucu(char *sonbas)
{
	int		i;
	char 	*str;

	i = 0;
	if (!sonbas[i])
		return (NULL);
	while (sonbas[i] != '\0' && sonbas[i] != '\n')
		i++;
	str = malloc(sizeof(char)*i+2);
	if (!str)
		return (NULL);
	i = 0;
	while(sonbas[i] != '\0' && sonbas[i] != '\n')
	{
		str[i]= sonbas[i];
		i++;
	}
	if (sonbas[i] == '\n')
	{
		str[i] = sonbas[i];
		i++;
	}
	str[i]='\0';
	return (str);
}

char	*okuma(int fd,char *sonbas)
{
	char	*metin;
	int		uzunluk;

	metin = malloc(sizeof(char)* BUFFER_SIZE + 1);
	if (!metin)
		return (0);
	uzunluk = 1;
	while (!ft_strchr(sonbas,'\n')&& uzunluk != 0)
	{
		uzunluk = read(fd,metin,BUFFER_SIZE);
		if (uzunluk == -1)
		{
			free (metin);
			return (0);
		}
		metin[uzunluk]='\0';
		sonbas = ft_strjoin(sonbas,metin);
	}
	free(metin);
	return (sonbas);
}

char	*get_next_line(int fd)
{
	char		*last;
	static char *sonbas;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	sonbas = okuma(fd,sonbas);
	if (!sonbas)
		return (0);
	last = anametinbulucu(sonbas);
	sonbas = yenibaslangic(sonbas);
	return (last);
}
