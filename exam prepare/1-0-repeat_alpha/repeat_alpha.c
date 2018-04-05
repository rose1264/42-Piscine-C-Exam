/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 00:56:50 by shuang            #+#    #+#             */
/*   Updated: 2018/03/22 01:12:08 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int repeat_time;

	i = 0;
	repeat_time = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (is_alpha(argv[1][i]))
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
					repeat_time = argv[1][i] - 96;
				if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')		
					repeat_time = argv[1][i] - 64;
				while (repeat_time)
				{
					ft_putchar(argv[1][i]);
					repeat_time--;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
