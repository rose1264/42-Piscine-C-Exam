/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 20:32:40 by exam              #+#    #+#             */
/*   Updated: 2018/04/02 15:35:43 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_simple_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_putnbr(nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else if(nb < 10)
	{	
		ft_putchar(nb + 48);
	}
}

int	main(int argc, char **argv)
{
	int i;
	int result;
	int nb;
	
	nb = ft_simple_atoi(argv[1]);
	if (argc == 2)
	{
		i = 1;
		while (i <= 9)
		{
			
			ft_putchar(i + 48);
			write(1, " x ", 3);
			ft_putstr(argv[1]);
			write(1, " = ", 3);
			result = i * nb;
			ft_putnbr(result);
			write(1, "\n", 1);
			i++;
		}	
	}
	write(1, "\n", 1);
	return (0);
}
