/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:35:11 by mkhalil           #+#    #+#             */
/*   Updated: 2023/01/01 14:01:40 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_upto_nl(int fd, char *content)
{
	char	*buffer;
	int		size_rd;

	size_rd = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(content, '\n') && size_rd != 0)
	{
		size_rd = read(fd, buffer, BUFFER_SIZE);
		if (size_rd == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[size_rd] = '\0';
		content = gnl_strjoin(content, buffer);
	}
	free(buffer);
	return (content);
}

char	*get_upto_nl(char *content)
{
	int		i;
	char	*line;

	i = 0;
	if (content[i] == '\0')
		return (NULL);
	while (content[i] != '\0' && content[i] != '\n')
		i++;
	if (content[i] == '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (line == NULL)
		return (NULL);
	i = 0;
	while (content[i] != '\0' && content[i] != '\n')
	{
		line[i] = content[i];
		i++;
	}
	if (content[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*file_remains(char *content)
{
	int		i;
	int		j;
	char	*remain;

	i = 0;
	while (content[i] != '\0' && content[i] != '\n')
		i++;
	if (content[i] == '\n')
		i++;
	if (content[i] == '\0')
	{
		free(content);
		return (NULL);
	}
	remain = malloc(sizeof(char) * (ft_strlen(content) - i + 1));
	if (remain == NULL)
		return (NULL);
	j = 0;
	while (content[i])
		remain[j++] = content[i++];
	remain[j] = '\0';
	free(content);
	return (remain);
}

char	*get_next_line(int fd)
{
	static char	*content;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	content = read_upto_nl(fd, content);
	if (content == NULL)
		return (NULL);
	line = get_upto_nl(content);
	content = file_remains(content);
	return (line);
}
/*
int main()
{
	int	fd;
	char *line;
	
	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s|", line);
	
//	line = malloc(sizeof(char) * (BUFFER_SIZE + 1));
//	printf("%lu, %p", read(fd, line, BUFFER_SIZE), line);
	close(fd);
	return (0);
}*/