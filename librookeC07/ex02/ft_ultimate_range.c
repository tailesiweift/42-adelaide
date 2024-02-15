/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librooke <librooke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:34:52 by librooke          #+#    #+#             */
/*   Updated: 2024/02/13 10:57:19 by librooke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	ret = malloc(sizeof(int) * (max - min));
	if (!ret)
		return (-1);
	while (min < max)
	{
		ret[i++] = min;
		min++;
	}
	*range = ret;
	return (i);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc > 2){
	int **range = malloc (sizeof(int *));
	
	ft_ultimate_range(range, atoi(argv[1]), atoi(argv[2]));
	for (int i = 0; i < (atoi(argv[2]) - atoi(argv[1])); i++)
	{
		printf("%i", range[0][i]);
	}
	}
}
*/