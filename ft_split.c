/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:52:17 by pcazac            #+#    #+#             */
/*   Updated: 2023/03/30 18:10:29 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**assign(char **dst, const char *s, char c);
size_t	occur(char const *s, char c);
int		freeall(char *s, char **sn);
int		occur_str(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**sn;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	sn = (char **) ft_calloc(occur(s, c), sizeof(char *));
	if (sn == NULL)
		return (NULL);
	if (occur(s, c) != 1)
		sn = assign(sn, s, c);
	return (sn);
}

char	**assign(char **dst, const char *s, char c)
{
	int		i;
	int		n;
	int		start;

	n = -1;
	i = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			n++;
		if (s[i])
		start = i;
		if (occur_str(&s[i], c) && s[i])
			dst[n] = ft_substr(s, start, occur_str(&s[i], c));
		i = i + occur_str(&s[i], c);
		if (freeall(dst[n], dst))
			return (NULL);
	}
	return (dst);
}

int	occur_str(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

int	freeall(char *s, char **sn)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		while (sn[i])
		{
			free(sn[i]);
			i++;
		}
		free(sn);
		return (1);
	}
	return (0);
}

size_t	occur(char const *s, char c)
{
	int		i;
	size_t	n;
	char	m;

	i = 0;
	n = 0;
	m = c;
	while (s[i])
	{
		while (m == c && s[i])
			m = s[++i];
		if (s[i])
			n++;
		while (s[i] != c && s[i])
			m = s[++i];
	}
	return (n + 1);
}
