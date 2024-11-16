/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:05:44 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:37:25 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strlcat function concatenates the string src to the end of the
	string dst, ensuring that the total length of the resulting string does
	not exceed size. It copies up to size - 1 characters from src and appends
	a null character (\0) to the resulting string. If size is less than or
	equal to the length of dst, the dst string is not modified.

	RETURN VALUE :
	It returns the total length of the resulting string, which is the sum of
	the lengths of src and the original length of dst. If size is less than or
	equal to the size of dst, the dst string is truncated, but the total length
	of the resulting string is calculated by considering
	the entire length of src.

*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	i = 0;
	if (size > dst_size)
	{
		while (src[i] && (dst_size + i) < size - 1)
		{
			dst[dst_size + i] = src[i];
			i++;
		}
		dst[dst_size + i] = '\0';
	}
	if (dst_size >= size)
		dst_size = size;
	return (dst_size + ft_strlen(src));
}
