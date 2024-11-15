/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:25:23 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:36:02 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strtrim function allocates (using malloc(3)) and returns a new
	string that is a trimmed version of s1. It removes any characters from
	the beginning and end of s1 that are present in the string set.

	RETURN VALUE :
	It returns the new trimmed string. If s1 or set is NULL, or if the
	allocation fails, it returns NULL.

*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	if (i == size)
		return (ft_strdup(""));
	j = size - 1;
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
