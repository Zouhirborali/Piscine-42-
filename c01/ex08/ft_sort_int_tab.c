/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:58:13 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/21 19:12:07 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	x;

	x = 0;
	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				x = tab[a];
				tab[a] = tab[b];
				tab[b] = x;
			}
			b++;
		}
		a++;
	}
}
/*
int main ()
{
int xx[]= {8,7,3,4};

int size=4;
ft_sort_int_tab(xx,size);
int i =0;
while(size>0)
{
    printf("%d ",xx[i]);
    i++;
    size--;
}
}*/