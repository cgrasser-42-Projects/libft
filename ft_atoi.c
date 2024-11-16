/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:57:27 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 18:39:01 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

	DESCRIPTION :
	The ft_atoi function converts a string str to an integer. It skips over any
	leading whitespace characters and handles the sign (+ or -) at the beginning
	of the string. Then, it reads the successive digits to construct the
	resulting integer, stopping when a non-numeric character is encountered.

	RETURN VALUE :
	It returns the converted integer, considering the sign specified at
	the beginning of the string.

*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sgn;
	int	to_return;

	i = 0;
	sgn = 1;
	to_return = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		to_return = to_return * 10 + (str[i] - 48);
		i++;
	}
	return (to_return * sgn);
}
