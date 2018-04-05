/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 12:39:26 by shuang            #+#    #+#             */
/*   Updated: 2018/04/02 12:46:25 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*rrange;
	int	i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end));
	else
		rrange = (int *)malloc(sizeof(int) * (end - start));
	i = 0;
	while (start != end)
	{
		rrange[i] = end;
		end += (start > end) ? 1 : -1;
		i++;
	}
	rrange[i] = end;
	return (rrange);
}
