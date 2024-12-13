/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:45:34 by cgrasser          #+#    #+#             */
/*   Updated: 2024/12/13 18:50:27 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

    DESCRIPTION :
    The ft_strcmp function compares the strings s1 and s2. The comparison
    stops as soon as a difference is found or if a null character is reached
    in either string.

    RETURN VALUE :
    0 if the strings s1 and s2 are equal.
    A positive or negative number corresponding to the difference between
    the first differing characters, calculated using their ASCII
    value (with the unsigned char type).

*/

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
