/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aresnyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:21:38 by aresnyan          #+#    #+#             */
/*   Updated: 2024/01/28 13:12:44 by aresnyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);
void	f_top(int x);
void	f_middle(int x, int y);
void	f_bottom(int x);

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		f_top(x);
		if (y > 2)
		{
			f_middle (x, y);
		}
		if (y > 1)
		{
			f_bottom (x);
		}
	}
}

void	f_top(int x)
{
	x = x - 2;
	ft_putchar('A');
	while (x > 0)
	{
		ft_putchar('B');
		x = x - 1;
	}
	if (x == 0)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	f_middle(int x, int y)
{
	char	num_of_spaces_to_do;

	num_of_spaces_to_do = x - 2;
	y = y - 2;
	while (y > 0)
	{
		ft_putchar('B');
		while (num_of_spaces_to_do > 0)
		{
			ft_putchar(' ');
			num_of_spaces_to_do = num_of_spaces_to_do - 1;
		}
		if (num_of_spaces_to_do == 0)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		num_of_spaces_to_do = x - 2;
		y = y - 1;
	}
}

void	f_bottom(int x)
{
	x = x - 2;
	ft_putchar('C');
	while (x > 0)
	{
		ft_putchar('B');
		x = x - 1;
	}
	if (x == 0)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}
