/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 14:59:13 by shuang            #+#    #+#             */
/*   Updated: 2018/04/01 17:28:11 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wdmatch(char *str1, char *str2)
{
	while (*str1)
	{
		while (*str2 && (*str1 != *str2))
			str2++;
		if (*str2 != *str1)
			return (0);
		str1++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		if (wdmatch(av[1], av[2]) == 1)
		{
			while (*av[1])
			{
				write(1, av[1], 1);
				av[1]++;
			}
		}
	write(1, "\n", 1);
	return (0);
}
