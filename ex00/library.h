/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: croy <croy@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:22:39 by vgonnot           #+#    #+#             */
/*   Updated: 2022/07/24 19:07:00 by croy             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBRARY_H
# define LIBRARY_H

char				**ft_parsing(char *dict_name);
char				**ft_split(char *str, char *charset);
unsigned long int	ft_atoi(char *str);
int					check_argv_value(char *str);
int					ft_strlen(int nbrs);
void				print_error(void);
void				ft_putstr(char *str);
int					*split_nbrs(long unsigned int nbrs);
char				*ft_strstr(char *str, char *to_find);
void				ft_putstr(char *str);
int					endstring(char **all_words, int *i, int j, char *str);
int					ft(char *str, char *all_words, int s);

#endif
