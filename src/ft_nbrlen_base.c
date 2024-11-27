/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:09:53 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/27 16:10:12 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen_base(unsigned long int n, int base_len)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n /= base_len;
		len++;
	}
	return (len);
}
