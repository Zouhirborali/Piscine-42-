/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:45:53 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/21 19:10:29 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < b) 
	{
		i = tab[a];
		tab[a] = tab[b];
		tab[b] = i;
		b--;
		a++;
	}
}

/*
int main ()
{
int xx[]= {9,7,3,4,5,5,4,7,8,5,1};
int size=7;
int i =0;
ft_rev_int_tab(xx,size);
while(size>0)
{
    char x= xx[i] + '0';
    write(1,&x,1);
    i++;
    size--;
}
}*/