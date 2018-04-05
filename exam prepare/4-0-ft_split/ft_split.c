/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuang <rose1264@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 20:59:29 by shuang            #+#    #+#             */
/*   Updated: 2018/04/02 21:18:02 by shuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))
				str++;
		if  (*str && (*str != ' ' || *str != '\n' || *str != '\t'))
		{
			count++;
			while  (*str && (*str != ' ' || *str != '\n' || *str != '\t'))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	char	*word;
	int		i;

	i = 0;
	while  (str[i] && (str[i] != ' ' || str[i] != '\n' || str[i] != '\t'))
	   i++;	
	word = (char *)malloc(sizeof(char)*(i + 1));
	i = 0;
	while  (str[i] && (str[i] != ' ' || str[i] != '\n' || str[i] != '\t'))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int		words;
	char	**tab;
	int		i;

	words = count_words(str);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n' || *str == '\t'))i
			str++;
		if  (*str && (*str != ' ' || *str != '\n' || *str != '\t'))
		{
			tab[i] = malloc_word(str);
			i++;
			while  (*str && (*str != ' ' || *str != '\n' || *str != '\t'))
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
