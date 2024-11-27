/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:47:56 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 17:56:35 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	DESCRIPTION :
	The ft_isprint function checks if the passed character is a printable
	character, meaning its ASCII value is between 32 and 126 inclusive.

	RETURN VALUE :
	It returns 1 if the character is printable, and 0 otherwise.

*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
