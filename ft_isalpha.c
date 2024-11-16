/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:01:41 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 15:27:51 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

   	DESCRIPTION:
   	The ft_isalpha function checks if the passed character is a letter of the
   	alphabet, either uppercase (A-Z) or lowercase (a-z).

	RETURN VALUE:
	It returns 1 if the character is a letter, and 0 otherwise.

*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
