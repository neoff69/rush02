/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croy <croy@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:14:26 by vgonnot           #+#    #+#             */
/*   Updated: 2022/07/24 20:32:34 by vgonnot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int	count(int *tab, char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	while (i < 256)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	while (charset[i])
	{
		tab[(int)charset[i]] = 1;
		i++;
	}
	count = 1;
	i = 0;
	while (str[i])
	{
		if (tab[(int)str[i]] == 1)
			count++;
		i++;
	}
	return (count);
}

int	ft(char *str, char *all_words, int s)
{
	int	i;

	i = 0;
	if (s == 1)
	{
		while (str[i])
			i++;
		return (i);
	}
	while (str[i])
	{
		all_words[i] = str[i];
		i++;
	}
	return (0);
}

int	check_word(char *str, int *tab, char **all_words)
{
	int	i;

	i = 0;
	while (str[i] && tab[(int)str[i]] == 1)
	{
		i++;
	}
	all_words[0] = malloc(sizeof(char) * ft(str, all_words[0], 1));
	return (i);
}

void	concatenation(char *str, char *charset, char **all_words, int *tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = check_word(str, tab, all_words);
	j = 0;
	while (i < count(tab, str, charset) && str[k])
	{
		while (tab[(int)str[k]] != 1 && str[k])
			all_words[i][j++] = str[k++];
		k++;
		if (str[k -1] == ':')
		{
			j = endstring(all_words, &i, j, str);
			while (str[k] != '\n')
				all_words[i][j++] = str[k++];
		}
		if (tab[(int)str[k]] != 1)
			j = endstring(all_words, &i, j, str);
	}
	all_words[i] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	int		tab[256];
	char	**all_words;

	all_words = malloc(sizeof(char *) * count(tab, str, charset));
	if (!(str))
		return (NULL);
	if (!(charset))
	{
		all_words[0] = malloc(sizeof(char) * ft(str, all_words[0], 1) + 4);
		ft(str, all_words[0], 0);
		return (all_words);
	}
	concatenation(str, charset, all_words, tab);
	return (all_words);
}
