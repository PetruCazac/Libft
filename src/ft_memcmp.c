/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:34:07 by pcazac            #+#    #+#             */
/*   Updated: 2023/11/09 13:53:29 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
	{
	size_t				i;
	int					j;
	const unsigned char	*st1;
	const unsigned char	*st2;

	i = 0;
	j = '\0';
	st1 = s1;
	st2 = s2;
	if (!n)
		return (0);
	while (i < n)
	{
		j = (st1[i] - st2[i]);
		if (j != 0)
			return (j);
		i++;
	}
	return (0);
}
