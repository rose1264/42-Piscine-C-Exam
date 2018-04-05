/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:28:09 by shuang            #+#    #+#             */
/*   Updated: 2018/04/01 14:24:37 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int i;
	int len;

	i = 0;
	while (str1[i])
	{
		if (ft_check(str1, str1[i], i) == 1)
			write(1, &str1[i], 1);
		i++;
	}
	len = i;
	i = 0;
	while (str2[i])
	{
		if (ft_check(str2, str2[i], i) == 1)
		{
			if (ft_check(str1, str2[i], len) == 1)
				write(1, &str2[i], 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
