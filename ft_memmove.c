/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:10:26 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/16 11:55:50 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_memmove function copies n bytes of memory from the area pointed
	to by src to the area pointed to by dest. It handles memory overlaps
	correctly by copying the bytes in the appropriate order (either from the
	start or from the end, depending on the position of dest relative to src).

	RETURN VALUE :
	It returns the pointer dest after performing the copy.

*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dest);
}
