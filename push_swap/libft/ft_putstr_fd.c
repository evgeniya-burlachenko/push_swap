#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s || fd < 0 )
		return ;
	write(fd, s, ft_strlen(s));
}
