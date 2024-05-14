/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:37:37 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/04 22:36:10 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count(char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strdup(char *src)
{
	int		x;
	char	*std; 

	x = 0;
	std = malloc(count(src) * sizeof(char) + 1);
	if (!std)
		return (0);
	while (src[x] != '\0')
	{
		std[x] = src[x];
		x++;
	}
	std[x] = '\0';
	return (std);
}
/*
int main()
{
	char p[]="gegkuk";;
	
	printf("%s",ft_strdup(p));
}*/