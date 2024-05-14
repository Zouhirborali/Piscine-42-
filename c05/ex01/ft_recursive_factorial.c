/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:13:18 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/29 21:01:39 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	x = nb * ft_recursive_factorial(nb - 1);
	return (x);
}
/*
int main() {
	// Write C code here
	printf("%d",ft_recursive_factorial(0));

	return 0;
}*/