/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strslen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 07:45:40 by cgrasser          #+#    #+#             */
/*   Updated: 2024/12/17 07:52:17 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_strslen function calculates the number of strings in an array of 
	strings, meaning the number of pointers in the array before reaching
	a NULL pointer.

	RETURN VALUE :
	It returns the number of strings in the array, which corresponds to
	the number of elements before the NULL pointer.

*/

int	ft_strslen(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}
