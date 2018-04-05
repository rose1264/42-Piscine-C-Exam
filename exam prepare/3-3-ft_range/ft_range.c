/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:28:23 by shuang            #+#    #+#             */
/*   Updated: 2018/04/02 12:47:22 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *range;
	int i;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end));
	else
		range = (int *)malloc(sizeof(int) * (end - start));
	i = 0;
	while (start != end)
	{
		range[i] = start;
		start += (start > end) ? -1 : 1;
		i++;
	}
	range[i] = start;
	return (range);
}
