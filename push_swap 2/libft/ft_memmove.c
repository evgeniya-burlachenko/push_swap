/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:08:40 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/06 13:52:02 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst1;
	unsigned const char	*src1;
	size_t				i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst > src)
	{
		dst1 = dst1 + len - 1;
		src1 = src1 + len - 1;
		while (i < len)
		{
			*dst1 = *src1;
			dst1--;
			src1--;
			i++;
		}
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
