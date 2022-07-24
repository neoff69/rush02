/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgonnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:29:26 by vgonnot           #+#    #+#             */
/*   Updated: 2022/07/24 20:31:44 by vgonnot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "library.h"

int	endstring(char **all_words, int *i, int j, char *str)
{
	all_words[(*i)++][j] = '\0';
	j = 0;
	all_words[*i] = malloc(sizeof(char) * ft(str, all_words[0], 1));
    return (0);
}
