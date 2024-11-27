/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:10:00 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:14:04 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strlcpy function copies a string from src to dst, ensuring that the
	copied string in dst is always null-terminated (\0). It copies up to size -1
	characters and guarantees that the destination buffer is null-terminated.
	The function returns the total length of the source string.

	RETURN VALUE :
	It returns the total length of the source string (src), meaning the number
	of characters before the null character (\0), regardless of the size of dst.

*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
