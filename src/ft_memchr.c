/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:29:41 by pcazac            #+#    #+#             */
/*   Updated: 2023/11/09 13:53:29 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	void					*l;
	unsigned const char		*sc;
	unsigned char			uc;

	l = NULL;
	sc = (unsigned const char *) s;
	i = 0;
	uc = (unsigned char) c;
	while (i < n)
	{
		if (uc == sc[i])
			return ((void *) &sc[i]);
		i++;
	}
	return (l);
}
