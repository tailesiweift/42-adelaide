/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librooke <librooke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:37:04 by librooke          #+#    #+#             */
/*   Updated: 2024/02/14 14:52:00 by librooke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc > 2)
	{
		int amount = abs(abs(atoi(argv[2])) - abs(atoi(argv[1])));
		int *i = ft_range(atoi(argv[1]), atoi(argv[2]));
		for (int j = 0; j < amount; j++)
			printf("%i\n", i[j]);
	}
}
*/