/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:55:08 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/04 22:38:20 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	i;
	int	*std;

	i = 0;
	std = NULL;
	if (max <= min)
		return (std);
	x = max - min;
	std = malloc(x * sizeof(int));
	if (!std)
		return (0);
	while (x > 0)
	{
		std[i] = min++;
		x--;
		i++;
	}
	return (std);
}
/*
int main()
{

	
	printf("%p",ft_range(10,10));


}*/