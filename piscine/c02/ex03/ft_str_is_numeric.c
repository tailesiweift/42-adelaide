/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:44:41 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/04 18:36:12 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main (void)
{
	char abc[] = "1238fh82";
	ft_str_is_numeric(abc);
	printf("%d", ft_str_is_numeric(abc));
	printf("%d", ft_str_is_numeric("123456"));
	printf("%d", ft_str_is_numeric(""));
}*/
