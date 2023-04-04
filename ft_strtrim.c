/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:51:54 by pcazac            #+#    #+#             */
/*   Updated: 2023/03/31 14:03:22 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = 0;
	l = ft_strlen(s1);
	if (l == 0)
		return (ft_strdup("\0"));
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[l - j - 1]) && l - j - 1 >= 0)
		j++;
	if (i + j >= l)
		return (ft_strdup("\0"));
	l = l - (i + j);
	s2 = ft_substr(s1, (unsigned int) i, l);
	return (s2);
}
