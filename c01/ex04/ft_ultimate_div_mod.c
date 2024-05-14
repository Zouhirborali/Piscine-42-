/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:25:54 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/20 17:03:44 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}

/*
int main()
{
    int a=123;
    int b=10;
    ft_ultimate_div_mod(&a,&b);
    printf("a= %d",a);
    printf("b= %d",b);
}*/