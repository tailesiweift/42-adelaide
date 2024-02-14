/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xuzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:38:59 by xuzhang           #+#    #+#             */
/*   Updated: 2024/02/04 18:55:51 by xuzhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	char abc[] = "qwert";
	ft_str_is_lowercase(abc);
	printf("%d", ft_str_is_lowercase(abc));
	printf("%d", ft_str_is_lowercase("qweRTY"));
	printf("%d", ft_str_is_lowercase(""));
}*/
