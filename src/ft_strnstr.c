/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcazac <pcazac@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:19:05 by pcazac            #+#    #+#             */
/*   Updated: 2023/11/09 13:53:29 by pcazac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!needle[i])
		return ((char *) haystack);
	if (!haystack[i])
		return (NULL);
	while (i < len && ((unsigned int) ft_strlen(needle) + i) <= len)
	{
		if (!ft_strncmp(&haystack[i], needle, ft_strlen(needle)))
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
