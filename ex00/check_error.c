/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgonnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:57:40 by vgonnot           #+#    #+#             */
/*   Updated: 2022/07/24 20:06:12 by vgonnot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "library.h"
#include <unistd.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
}

unsigned long int	ft_atoi(char *str)
{
	int					i;
	unsigned long int	result;
	unsigned long int	ulintmax;

	i = 0;
	result = 0;
	ulintmax = 4294967295;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > ulintmax)
		return (-1);
	return (result);
}

int	check_argv_value(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (-1);
		i++;
	}
	return (0);
}
