/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croy <croy@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:48:45 by croy              #+#    #+#             */
/*   Updated: 2022/07/24 20:19:06 by vgonnot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "library.h"
#include <stdio.h>

int	ft_intlen(long unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
		size++;
	while (nbr > 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

int	*ft_putnbr(int nbrs, int *tab, int i)
{
	unsigned int	nbr;

	nbr = nbrs;
	if (0 <= nbr && nbr < 1000)
		tab[i] = nbr;
	while (nbr > 0)
	{
		tab[i] = nbr % 1000;
		nbr /= 1000;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int	*split_nbrs(long unsigned int nbrs)
{
	int	size;
	int	*tab;

	size = ft_intlen(nbrs);
	tab = malloc(sizeof(int) * size + 1);
	if (!(tab))
		return (0);
	tab = ft_putnbr(nbrs, tab, 0);
	return (tab);
}

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

void	print_param(int tab, int group)
{
	int	power;

	power = ft_iterative_power(tab, group);
}
