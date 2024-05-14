/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:19:49 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/29 17:30:16 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
		return (0);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else 
	{
		return (1);
	}
}
/*
int main() {
	// Write C code here
	printf("%d",_recursive_power(3,3));

	return 0;
}*/