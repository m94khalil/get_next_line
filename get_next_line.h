/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:36:13 by mkhalil           #+#    #+#             */
/*   Updated: 2022/07/16 13:48:38 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
#include <stdio.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*read_to_nl(int fd, char *content);
char	*get_to_nl(char *content);
char	*file_remains(char *content, char *line);
char	*get_next_line(int fd);

#endif
