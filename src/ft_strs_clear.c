/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:37:08 by cgrasser          #+#    #+#             */
/*   Updated: 2024/12/19 10:42:16 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strs_clear function frees all the memory allocated for
	an array of strings.
	It iterates over the array of strings (array of char pointers), freeing
	each individual string (using free for each string in the array).
	After freeing all the strings, it frees the memory
	allocated for the array itself.

	RETURN VALUE :
	The function does not return any value (void).
	It performs the memory deallocation but does not provide any feedback.

*/

void	ft_strs_clear(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i]);
	free(strs);
}
