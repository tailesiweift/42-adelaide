/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:22:17 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/13 14:42:49 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	result;

	x = 1;
	result = 1;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		while (nb > result)
		{
			result = x * x;
			if (result == nb)
			{
				return (x);
			}
			x++;
		}
		return (0);
	}
	return (0);
}

/*int main(void)
{
	int	nb;

	nb = 9;
	printf("%d", ft_sqrt(nb));
}*/
