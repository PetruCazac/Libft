/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:08:45 by pcazac            #+#    #+#             */
/*   Updated: 2023/03/29 09:02:07 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*l;
	char	a;

	i = 0;
	l = NULL;
	a = (char) c;
	while (s[i])
	{
		if (s[i] == a)
			l = (char *) s + i;
		i++;
	}
	if (a == s[i])
		l = (char *) s + i;
	return (l);
}
