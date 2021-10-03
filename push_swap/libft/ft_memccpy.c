/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:46:46 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:46:46 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*d;
	unsigned char			*s;
	unsigned char			ch;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	ch = (unsigned char)c;
	while (n--)
	{
		*d = *s++;
		if (*d++ == ch)
			return (d);
	}
	return (NULL);
}
