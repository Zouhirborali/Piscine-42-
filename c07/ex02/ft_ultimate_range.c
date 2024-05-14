/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 22:14:25 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/04 22:35:46 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc((size * 4));
	if (!range)
	{
		return (-1);
	}
	i = 0;
	while (i < max - min)
	{
		*(*range + i) = min + i;
		i++;
	}
	return (size);
}
/*
int main ()
{
    int *range;
    printf("%d",ft_ultimate_range(&range,10, 10));

}*/