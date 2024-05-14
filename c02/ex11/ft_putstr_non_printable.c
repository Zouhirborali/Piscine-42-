/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:21:54 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/03 12:49:45 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	p(char c)
{
	write(1, &c, 1);
}
/*
void	ch_h(unsigned char c)
{
	char	*h;

	h = "0123456789abcdef";
	p(h[c / 16]);
	p(h[c % 16]);
}
*/

void	ft_putstr_non_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] < 32 || str[x] > 126)
		{
			p('\\');
			p("0123456789abcdef"[(unsigned char)str[x] / 16]);
			p("0123456789abcdef"[(unsigned char)str[x] % 16]);
		}
		else
		{
			p(str[x]);
		}
		x++;
	}
}
/*
int main() 
{
   char x[] ={"khjy\nih"};
   ft_putstr_non_printable(x);
}
*/