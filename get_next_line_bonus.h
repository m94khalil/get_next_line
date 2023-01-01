/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:36:13 by mkhalil           #+#    #+#             */
/*   Updated: 2023/01/01 14:01:22 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*gnl_strjoin(char *s1, char *s2);
char	*read_upto_nl(int fd, char *content);
char	*get_upto_nl(char *content);
char	*file_remains(char *content);
char	*get_next_line(int fd);

#endif
