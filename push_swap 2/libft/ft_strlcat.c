/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:48:14 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/08 12:32:49 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	cnt;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	cnt = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (srclen + dstsize);
	while (dstsize - 1 > dstlen + cnt && src[cnt] != '\0')
	{
		dst[dstlen + cnt] = src[cnt];
		cnt++;
	}
	dst[dstlen + cnt] = '\0';
	return (srclen + dstlen);
}
