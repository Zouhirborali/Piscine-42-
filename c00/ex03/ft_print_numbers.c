/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:38:33 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/16 21:26:02 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	tt(int x)
{
	write(1, &x, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		tt(i);
		i++;
	}
}
/*
int	main()
{
	ft_print_numbers();
}
*/
