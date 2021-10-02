/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 20:54:50 by fraphael          #+#    #+#             */
/*   Updated: 2021/01/15 17:19:26 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*gnl_strjoin(char const *s1, char const *s2, int size_r, int num)
{
	char	*result;
	char	*temp;

	result = (char *)malloc(sizeof(char) * (size_r + num + 1));
	if (!result)
		return (NULL);
	temp = result;
	while (*s1)
		*result++ = *s1++;
	while (*s2)
		*result++ = *s2++;
	*result = '\0';
	return (temp);
}

char	*read_remain(char *remain, int fd)
{
	char	*help;
	char	*buf;
	int		num;
	int		size_r;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	remain = malloc(sizeof(char));
	if (buf == NULL || remain == NULL)
		return (NULL);
	remain[0] = '\0';
	size_r = 0;
	num = read(fd, buf, BUFFER_SIZE);
	while (num > 0)
	{
		buf[num] = '\0';
		help = gnl_strjoin(remain, buf, size_r, num);
		size_r += num;
		free(remain);
		remain = help;
		num = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (remain);
}

char	*get_line(long n, long i, char **line, char *remain)
{
	char	*new_line;
	int		cnt;

	new_line = malloc(sizeof(char) * (n - i + 1));
	if (new_line == NULL)
		return (NULL);
	cnt = 0;
	while (i < n)
		new_line[cnt++] = remain[i++];
	new_line[cnt] = '\0';
	*line = new_line;
	return (*line);
}

int	get_next_line(int fd, char **line)
{
	static char	*remain;
	static long	i;
	long		n;

	if (fd < 0 || !line || read(fd, NULL, 0) == -1 || BUFFER_SIZE <= 0)
		return (-1);
	if (!remain)
	{
		remain = read_remain(remain, fd);
		i = 0;
	}
	n = i;
	while (remain[n] != '\n' && remain[n] != '\0')
		n++;
	*line = get_line(n, i, line, remain);
	while (i < n)
		i++;
	if (remain[i] != '\0')
	{
		i++;
		return (1);
	}
	free(remain);
	remain = NULL;
	return (0);
}
