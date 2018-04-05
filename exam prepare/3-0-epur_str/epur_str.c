/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 00:08:28 by shuang            #+#    #+#             */
/*   Updated: 2018/04/02 11:50:32 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

void	epur_str(char *str)
{
	int len;

	len = ft_strlen(str);
	while (len && is_blank(str[len-1]))
		len--;
	while (len && is_blank(*str) && *str++)
		len--;
	while (len--)
	{
		if (!is_blank(*str) || !is_blank(*(str + 1)))
		{
			if (*str == '\t')
			{
				*str = ' ';
				write(1, str, 1);
			}
			else
				write(1, str, 1);
		}
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
