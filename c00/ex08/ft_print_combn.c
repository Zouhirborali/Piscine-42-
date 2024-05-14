/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 23:24:50 by zbakkas           #+#    #+#             */
/*   Updated: 2023/08/19 19:31:02 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	x1(char st[] ,int xx, int xxx)
{
	while (st[xx - 1] <= '9')
	{
		
		xxx = 0;
	    while(xxx < xx)
	    {
			write(1,&st[xxx],1);
		    xxx++;
        }  
		if (st[0] == 10 - xx)
		{
		}else
		{
			write(1,", ",2);
		}
		st[xx - 1]++;
	}
}

void	x2(char st[], int xx, int xxx)
{
   
	
	

	if(xx ==2)
	{
	    while(st[xx-2]<='8')
	{
		st[xx-1]=st[xx-2]+1;
		x1(st,xx,xxx);
		st[xx-2]++;
	}
	}
		else
	{
	    while(st[xx - 3] <= '7')
    	{
		    st[xx - 2] = st[xx - 3] + 1;
		    while(st[xx-2]<='8')
	            {
		            st[xx-1]=st[xx-2]+1;
		            x1(st,xx,xxx);
		            st[xx-2]++;
	            }
		   st[xx - 3]++;
	    }
	}
}



void	x4(char st[], int xx, int xxx)
{

	if(xx==4)
	{
	    while(st[xx - 4] <= '6')
        	{
		    st[xx - 3] = st[xx - 4] + 1;
	    	x2(st, xx, xxx);
	    	st[xx - 4]++;
	        }
	}
	else 
	{
	    while(st[xx-5] <= '5')
	    {
		    st[xx - 4] = st[xx - 5] + 1;
			while(st[xx - 4] <= '6')
            	{
		            st[xx - 3] = st[xx - 4] + 1;
		            x2(st, xx, xxx);
		            st[xx - 4]++;
	            }
	    	st[xx - 5]++;
	    }
	}
}



void	x6(char st[], int xx, int xxx)
{
    if(xx==6)
    {
        	while(st[xx - 6] <= '4')
	{
		st[xx - 5] = st[xx - 6] + 1;
		x4(st, xx, xxx);
		st[xx - 6]++;
	}
    }
    else
    {
        	while(st[xx - 7] <= '3')
	{
		st[xx - 6] = st[xx - 7] + 1;
			while(st[xx - 6] <= '4')
	{
		st[xx - 5] = st[xx - 6] + 1;
		x4(st, xx, xxx);
		st[xx - 6]++;
	}
		st[xx - 7]++;
	}
    }

}



void	x8(char st[], int xx, int xxx)
{
	while(st[xx-8]<='2')
	{
		st[xx-7]=st[xx-8]+1;
		x6(st,xx,xxx);
		st[xx-8]++;
	}
}

void	x9(char st[], int xx, int xxx)
{
	while(st[xx - 9] <= '1')
	{
		st[xx - 8]= st[xx - 9] + 1;
		x8(st, xx, xxx);
		st[xx - 9]++;
	}
}


void	ft_print_combn(int n)
{
  int	xxx;

  xxx = 0;
  char	st[]="0";
  void (*functions[])() = {x1, x2, x4,x6,x8,x9};
   functions[3](st, n ,xxx);
 
}

/*
int	main() 
{
 ft_print_combn(7);
   
}
*/
