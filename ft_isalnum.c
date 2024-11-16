/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:30:12 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 15:28:43 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	
   	DESCRIPTION: 
   	The ft_isalnum function checks if the passed character is alphanumeric,
   	meaning it is either a letter (uppercase or lowercase) or a digit.

   	RETURN VALUE:
   	It returns 1 if the character is alphanumeric, and 0 otherwise.

*/

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
