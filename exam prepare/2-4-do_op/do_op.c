/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 17:37:53 by shuang            #+#    #+#             */
/*   Updated: 2018/04/03 12:19:07 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(char *str1, char c, char *str2)
{
	int i;
	int j;

	i = atoi(str1);
	j = atoi(str2);
	if ( c == '+')
		printf("%d", i + j);
	if ( c == '-')
		printf("%d", i - j);
	if ( c == '*')
		printf("%d", i * j);
	if ( c == '/')
		printf("%d", i / j);
	if ( c == '%')
		printf("%d", i % j);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2][0], av[3]);
	printf("\n");
	return (0);
}
