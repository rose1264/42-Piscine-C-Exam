/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 19:12:39 by exam              #+#    #+#             */
/*   Updated: 2018/03/30 19:50:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*str_capitalizer(char *str)
{
	int i;
	int space;

	i = 0;
	space = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			space = 1;
		else if (str[i] != ' ' && str[i] != '\t' && space == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			space = 0;
		}
		else if (str[i] != ' ' && str[i] != '\t' && space == 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	else if (argc > 1)
	{
		while (argv[i])
		{
			ft_putstr(str_capitalizer(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
