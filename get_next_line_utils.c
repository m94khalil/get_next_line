/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhalil <mkhalil@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:30:52 by mkhalil           #+#    #+#             */
/*   Updated: 2022/07/16 12:05:16 by mkhalil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (*str != (char)c && *str != 0)
		str++;
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		flag;
	char	*join;

	flag = 0;
	if (s1 == 0)
	{
		flag = 1;
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	join = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == 0 || s1 == 0 || s2 == 0)
		return (NULL);
	i = -1;
	while (s1[++i])
		join[i] = s1[i];
	while (*s2)
		join[i++] = *s2++;
	join[i] = 0;
	if (flag)
		free(s1);
	return (join);
}
