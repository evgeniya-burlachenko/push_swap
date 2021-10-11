/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:47:45 by skelly            #+#    #+#             */
/*   Updated: 2021/10/03 23:48:01 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

static int	count_words(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	*ft_clean(char **res, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	*new_word(const char *s, size_t n)
{
	char	*str;

	str = malloc(sizeof(char) * n + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, n + 1);
	return (str);
}

char	**ft_split(char	const *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**res;

	i = 0;
	word = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (ft_clean(res, i));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			res[word++] = new_word(s + j, i - j);
	}
	res[word] = NULL;
	return (res);
}
