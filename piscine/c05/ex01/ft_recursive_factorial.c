/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:13:36 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/11 20:25:23 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
	return (1);
}

/*int main(void)
{
	int	nb;

	nb = 4;
	printf("%d\n", ft_recursive_factorial(nb));
	return (0);
}*/
