/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:10:27 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/12 14:34:01 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*need;
	size_t	nlen;
	int		help;

	if (!(*needle))
		return ((char *)haystack);
	hay = (char *)haystack;
	need = (char *)needle;
	nlen = ft_strlen(needle);
	while (len > 0)
	{
		help = ft_strncmp(hay, need, nlen);
		if (len < nlen)
			return (NULL);
		if (help == 0)
			return (hay);
		hay++;
		len--;
	}
	return (NULL);
}
