/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:47:06 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:47:07 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	size_t		j;
	size_t		i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	if (i < start)
		len = 0;
	else if (i < start + len)
		len = i - start;
	j = 0;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (j < len && start <= i)
		res[j++] = s[start++];
	res[j] = '\0';
	return (res);
}
