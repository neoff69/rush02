/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionnary_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgonnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:07:59 by vgonnot           #+#    #+#             */
/*   Updated: 2022/07/24 20:14:42 by vgonnot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "library.h"
#include <stdlib.h>
#include <stdio.h>

int	number_sign(char *str, int *i)
{
	int	result;

	result = 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			result *= -1;
		(*i)++;
	}
	return (result);
}

int	check_dict(void)
{
	int		i;
	int		j;
	int		sign;
	char	**dict_array;
	int		error;

	error = 0;
	dict_array = ft_parsing("test");
	i = 0;
	while (dict_array[i])
	{
		j = 0;
		sign = number_sign(dict_array[i], &j);
		while (dict_array[i][j] >= '0' && '9' >= dict_array[i][j])
			j++;
		if (dict_array[i][j] != '\0')
		{
			ft_putstr("Dict Error\n");
			return (-1);
		}
		i += 2;
	}
	return (0);
}
