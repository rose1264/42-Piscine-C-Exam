/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 22:15:10 by shuang            #+#    #+#             */
/*   Updated: 2018/03/21 22:17:55 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char i;
	char j;

	i = 'a';
	j = 'B';
	while (i <= 'y' && j <= 'Z')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		i += 2;
		j += 2;
	}
	write(1, "\n", 1);
	return (0);
}
