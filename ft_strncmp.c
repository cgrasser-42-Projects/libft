/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:15:05 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:27:43 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strncmp function compares the first n characters of the strings s1
	and s2. The comparison stops as soon as a difference is found or after n
	characters have been compared.

	RETURN VALUE :
	0 if the first n characters of s1 and s2 are equal.
	A positive or negative number corresponding to the difference between
	the first differing characters, calculated using their ASCII
	value (with the unsigned char type).

*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n -1)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			break ;
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
