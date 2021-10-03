/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:46:49 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:46:50 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	unsigned char		ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*(str++) == ch)
			return (str - 1);
	}
	return (NULL);
}
