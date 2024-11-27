/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:26:37 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:07:43 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strmapi function creates a new string by applying the function f
	to each character of the string s, passing the index of each character and
	the character itself as arguments. The result of the function f is stored
	in a new string, which is allocated with malloc. The function iterates over
	the string s, applies f to each character, and stores the result in the
	new string. Finally, it adds a null-terminator at the end of the new string.

	RETURN VALUE :
	It returns a pointer to the newly allocated string,
	or NULL if the allocation fails.

*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*to_return;
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	to_return = (char *)malloc(len + 1);
	if (!to_return)
		return (NULL);
	i = 0;
	while (s[i])
	{
		to_return[i] = f(i, s[i]);
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}
