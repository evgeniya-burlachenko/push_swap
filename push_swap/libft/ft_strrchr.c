/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:47:15 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:47:16 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	if ((char)c == 0)
		return (str + i);
	while (i--)
	{
		if (s[i] == (char)c)
			return (str + i);
	}
	return (NULL);
}
