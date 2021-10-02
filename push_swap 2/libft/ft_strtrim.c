/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraphael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:44:25 by fraphael          #+#    #+#             */
/*   Updated: 2020/11/14 11:18:19 by fraphael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		cnt;
	int		fin;

	if (!s1 || !set)
		return (NULL);
	cnt = 0;
	while (ft_strchr(set, s1[cnt]) && s1[cnt])
		cnt++;
	fin = ft_strlen(s1);
	{
		while (ft_strchr(set, s1[fin]) && fin > 1)
			fin--;
	}
	result = ft_substr(s1, cnt, fin - cnt + 1);
	return (result);
}
