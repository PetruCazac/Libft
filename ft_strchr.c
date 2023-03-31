/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:59:57 by pcazac            #+#    #+#             */
/*   Updated: 2023/03/29 08:59:45 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*l;
	char	a;

	i = 0;
	l = NULL;
	a = (char) c;
	while (s[i] && s[i] != a)
		i++;
	if (s[i] == a)
		return ((char *) &s[i]);
	return (l);
}
