/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:28:48 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/30 16:48:14 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	div;
	int	x;

	div = 2;
	x = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((nb / div) >= div)
	{
		if ((div * div) == nb)
		{
			return (div);
		}
		div ++;
	}
	return (0);
}
/*
int main() {
	// Write C code here
	printf("%d",ft_sqrt(15));

	return 0;
}*/