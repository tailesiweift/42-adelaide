/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:01:09 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/04 19:14:28 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	char abc[] = "QWERT";
	ft_str_is_uppercase(abc);
	printf("%d", ft_str_is_uppercase(abc));
	printf("%d", ft_str_is_uppercase(""));
	printf("%d", ft_str_is_uppercase("123fhTY"));
}*/
