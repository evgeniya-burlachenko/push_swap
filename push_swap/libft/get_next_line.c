#include "libft.h"

int	ft_clean(char **ptr, int inp)
{
	free(*ptr);
	*ptr = 0;
	return (inp);
}

int	ft_reading_file(char **save, int fd)
{
	char	*buf;
	int		byte;
	char	*tmp;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (-1);
	byte = read(fd, buf, BUFFER_SIZE);
	while (byte > 0)
	{
		buf[byte] = '\0';
		tmp = *save;
		*save = ft_strjoin(*save, buf);
		if (!(*save))
		{
			ft_clean(&tmp, 0);
			return (ft_clean(&buf, -1));
		}
		ft_clean(&tmp, 0);
		if (ft_strchr(*save, '\n'))
			return (ft_clean(&buf, byte));
		byte = read(fd, buf, BUFFER_SIZE);
	}
	return (ft_clean(&buf, byte));
}

int	ft_get_save(char **save, char **line)
{
	char	*tmp;
	char	*check;

	check = ft_strchr(*save, '\n');
	if (check)
	{
		*check = '\0';
		tmp = *save;
		*line = ft_strdup(*save);
		if (!(*line))
			return (ft_clean(&tmp, -1));
		*save = ft_strdup(++check);
		if (!(*save))
			return (ft_clean(&tmp, -1));
		return (ft_clean(&tmp, 1));
	}
	*line = ft_strdup(*save);
	if (!(*line))
		return (ft_clean(save, -1));
	return (ft_clean(save, 0));
}

int	get_next_line(int fd, char **line)
{
	static char	*save[256];
	int			byte;

	if (!line || BUFFER_SIZE <= 0 || fd < 0 || fd > 256)
		return (-1);
	byte = ft_reading_file(&save[fd], fd);
	if (byte < 0)
		return (-1);
	if (byte == 0 && save[fd] == 0)
	{
		*line = ft_strdup("");
		return (0);
	}
	return (ft_get_save(&save[fd], line));
}
