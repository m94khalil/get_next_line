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
/*
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*content;
	char	*buff;
	int	size;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	size = 0;
	while (size != -1)
	{
		size = read(fd, buff, BUFFER_SIZE);

		content = ft_strjoin(content, buff, size);

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
*/
#include <stdio.h>
int main()
{
	int	fd;
	int size;
	char	*line;

	line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (line == NULL)
		return (0);
	fd = open("test.txt", O_RDONLY);
	size = read(fd, line, BUFFER_SIZE);
	line[10] = 0;
	printf("%s", line);
	free(line);
	close(fd);
	return (0);
}
