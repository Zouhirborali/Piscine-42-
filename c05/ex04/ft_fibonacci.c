/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:23:23 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/29 17:30:21 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_fibonacci(int index)
{
	int	a;

	a = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0 || index == 1)
	{
		return (index);
	}
	else
		a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (a);
}
/*
int main() {
	// Write C code here
	printf("%d",ft_fibonacci(8));

	return 0;
}*/