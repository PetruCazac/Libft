/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:33:03 by pcazac            #+#    #+#             */
/*   Updated: 2023/03/16 19:03:01 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*s;
	unsigned char	d;
	size_t			i;

	d = (unsigned char) c;
	s = b;
	i = 0;
	while (i < len)
	{
		s[i] = d;
		i++;
	}
	return (s);
}
