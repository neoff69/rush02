/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgonnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:33:57 by vgonnot           #+#    #+#             */
/*   Updated: 2022/07/24 20:45:17 by vgonnot          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "library.h"
#include <unistd.h>

int	error(void)
{
	ft_putstr("Dict Error\n");
	return (-1);
}

int	size_buffer(int *number_line, char *dict_name)
{
	int		i;
	int		file;
	int		ret;
	char	buffer[1];

	ret = 1;
	i = 0;
	file = open(dict_name, O_RDONLY);
	if (file == -1)
		return ((int)error);
	while (ret)
	{
		ret = read(file, buffer, 1);
		i++;
		if (buffer[0] == '\n')
			(*number_line)++;
	}
	if (close(file) == -1)
		return ((int)error);
	return (i);
}

char	*parse_dict(int size, char *dict_name)
{
	int		file;
	int		ret;
	char	*buffer;

	buffer = malloc(sizeof(char) * size + 1);
	file = open(dict_name, O_RDONLY);
	if (file == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	ret = read(file, buffer, size);
	if (close(file) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (buffer);
}

char	**ft_parsing(char *dict_name)
{
	int		number_line;
	int		size;
	char	*dict;
	char	**tab_dict;
	int		i;

	i = 0;
	number_line = 0;
	size = size_buffer(&number_line, dict_name);
	dict = parse_dict(size, dict_name);
	tab_dict = ft_split(dict, " :\n");
	return (tab_dict);
}
