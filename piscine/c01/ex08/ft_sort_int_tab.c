/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:35:44 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/10 14:15:36 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	x;

	i = 0;
	a = 0;
	while (i < size - 1)
	{
		while (a < size - 1 - i)
		{
			if (tab[a] > tab [a + 1])
			{
				x = tab[a];
				tab [a] = tab [a + 1];
				tab [a + 1] = x;
			}
			a++;
		}
		i++;
		a = 0;
	}
}

/*int	main(void)
{
	int	str[4] = {4, 1, 3, 2};
	int i;

	ft_sort_int_tab(str, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d", str[i]);
		i++;
	}
	return (0);
}*/
