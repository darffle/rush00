/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xbaudhui <xbaudhui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:58:25 by xbaudhui          #+#    #+#             */
/*   Updated: 2021/10/16 13:32:48 by xbaudhui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	fct_1(int x)
{
	char	f1;

	f1 = 'A';
	ft_putchar(f1);
	x--;
	while (x > 1)
	{
		f1 = 'B'		
		ft_putchar(f1);
		x--;
	}
	f1 = 'A';
	ft_putchar(f1);
	ft_putchar('\n');
}

void	fct_2(int x)
{
	char	f2;

	f2 = 'B';
	ft_putchar(f2);
	x--;
	while (x > 1)
	{
		f2 = ' ';
		ft_putchar(f2);
		x--;
	}
	f2 = 'B';
	ft_putchar(f2);
	ft_putchar('\n');
}

void	fct_3(int x)
{
	char	f3;

	f3 = 'C';
	ft_putchar(f3);
	x--;
	while (x > 1)
	{
		f3 = 'B';
		ft_putchar(f3);
		x--;
	}
	f3 = 'C';
	ft_putchar(f3);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		fct_1(x);
		y--;
		while (y > 1)
		{		
			fct_2(x);
			y--;
		}
		fct_3(x);
	}			
}
