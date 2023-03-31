/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:38:57 by pcazac            #+#    #+#             */
/*   Updated: 2023/03/16 16:08:32 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *c, size_t n)
{
	char	*d;
	int		i;

	d = c;
	i = 0;
	while (n > 0)
	{
		d[i++] = 0;
		n--;
	}
}