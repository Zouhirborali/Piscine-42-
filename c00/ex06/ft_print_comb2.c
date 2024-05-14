/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 17:17:57 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/19 23:50:57 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writee(int i)
{
	write(1, &i, 1);
}

void	calcul(int a, int b)
{
	writee((a / 10) + '0');
	writee((a % 10) + '0');
	writee(' ');
	writee((b / 10) + '0');
	writee((b % 10) + '0');
	if (a >= 98)
	{		
	}
	else
	{
		writee(',');
		writee(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			calcul (a, b);
			b++;
		}
		a++;
	}
}
//int main()
//{
//    ft_print_comb2();
//}
