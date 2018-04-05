/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 20:39:51 by shuang            #+#    #+#             */
/*   Updated: 2018/04/01 23:16:53 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

void	ft_positive_putnbr(int nb)
{
	char nbr;

	if (nb > 9)
	{
		ft_positive_putnbr(nb / 10);
		ft_positive_putnbr(nb % 10);
	}
	else
	{
		nbr = nb + 48;
		write(1, &nbr, 1);
	}	
}

int	is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(int n)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_positive_putnbr(sum);
}

int	main(int ac, char **av)
{
	if (ac != 2 || ft_atoi(av[1]) < 1)
		return (0);
	else
		add_prime_sum(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
