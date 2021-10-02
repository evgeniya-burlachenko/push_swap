/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:38:10 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/05 18:42:49 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst1;
	unsigned const char	*src1;
	unsigned char		c1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned const char *)src;
	c1 = (unsigned char)c;
	while (n != 0)
	{
		*dst1 = *src1;
		src1++;
		dst1++;
		n--;
		if (*(dst1 - 1) == c1)
			return (dst1);
	}
	return (NULL);
}
