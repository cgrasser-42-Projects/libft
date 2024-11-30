/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:59 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:12:02 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_putchar_fd function writes the character c to the given
	file descriptor fd.

	RETURN VALUE :
	This function does not return a value.

*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
