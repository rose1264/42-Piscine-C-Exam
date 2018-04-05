/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 19:33:39 by shuang            #+#    #+#             */
/*   Updated: 2018/04/02 20:01:55 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	test_base(const char c)
{
	int	nb;
	
	if (c >= '0' && c <= '9')
		nb = c - '0';
	else if (c >= 'a' && c <= 'f')
		nb = c - 'a' + 10;
	else if (c >= 'A' && c <= 'F')
		nb = c - 'A' + 10;
	else
		nb = -1;
	return (nb);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int res;
	int i;

	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13) || *str == '+')
		str++;
	sign = (*str == '-' ? -1 : 1);
	i = test_base(*str);
	while (i >= 0 && i < str_base)
	{
		res = res * str_base + i;
		str++;
		i = test_base(*str);
	}
	return (sign * res);	
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], atoi(av[2])));
	return (0);
}
