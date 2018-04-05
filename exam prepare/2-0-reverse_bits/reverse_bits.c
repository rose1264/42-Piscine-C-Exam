/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 11:57:10 by shuang            #+#    #+#             */
/*   Updated: 2018/04/01 12:07:35 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bitwise.h>

unsigned char	reverse_bits(unsigned char octet);
{
	unsigned char	r;
	int				byte_len;

	r = 0;
	byte_len = 8;
	while (byte_len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}
