/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcourtoi <kcourtoi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:57:10 by croy              #+#    #+#             */
/*   Updated: 2022/07/24 17:10:52 by kcourtoi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (check_argv_value(argv[1]) == 0)
		{
			if (ft_atoi(argv[1]) != (unsigned long)1)
			{
				split_nbrs(ft_atoi(argv[1]));
				ft_parsing("numbers.dict");
				return (0);
			}
		}
	}
	else if (argc == 3)
	{
		if (check_argv_value(argv[1]) == 0)
		{
			if (ft_atoi(argv[1]) == 0)
			{
				ft_parsing(argv[1]);
				return (0);
			}
		}
	}
	print_error();
	return (1);
}
