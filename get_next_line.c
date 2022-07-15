/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:35:11 by mkhalil           #+#    #+#             */
/*   Updated: 2022/07/15 20:41:18 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buff;
	int		size;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	size = read(fd, buff, BUFFER_SIZE);
	if (size == -1)
		return (NULL);
	if (size < BUFFER_SIZE)
		buff[size] = '\0';
	i = 0;
	while (buff[i])
	{
		if (buff[i] == '\n')
		
	}
}