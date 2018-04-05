/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 00:41:06 by shuang            #+#    #+#             */
/*   Updated: 2018/04/01 01:03:50 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char *str, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void	inter(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i])
	{
		if (ft_check(str1, str1[i], i) == 1)
		{
			j = 0;
			while (str2[j])
			{
				if (str1[i] == str2[j])
				{
					write (1, &str1[i], 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);

}
