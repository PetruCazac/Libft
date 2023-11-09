/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:09:46 by pcazac            #+#    #+#             */
/*   Updated: 2023/11/09 13:53:29 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*v;
	char	c;
	size_t	i;

	i = 0;
	c = 0;
	v = malloc(size * count);
	if (!v)
		return (v);
	while (i < (size * count))
	{
		v[i] = c;
		i++;
	}
	return ((void *) v);
}
