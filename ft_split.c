/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:31:28 by cgrasser          #+#    #+#             */
/*   Updated: 2024/11/15 19:02:24 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

	DESCRIPTION :
	The ft_split function splits the string s into an array of strings, using
	the character c as a delimiter. It allocates memory for each word in the
	string, and for the array itself. The function works by first counting the
	number of words in s using the helper function ft_count_words, then
	processing each word using ft_split_process.

	RETURN VALUE :
	It returns a pointer to an array of strings containing the words from s.
	If the allocation fails at any point, or if s is NULL, it returns NULL.

*/

static void	*ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	ft_count_words(const char *str, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static void	ft_split_process(char const *s, char c, int *i, int *start)
{
	while (s[*i] && s[*i] == c)
		(*i)++;
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

char	**ft_split(char const *s, char c)
{
	char	**to_return;
	int		len_tab;
	int		start;
	int		i;
	int		j;

	start = 0;
	i = 0;
	j = 0;
	len_tab = ft_count_words(s, c);
	to_return = (char **) malloc((len_tab + 1) * sizeof(char *));
	if (!to_return)
		return (NULL);
	while (s[i])
	{
		ft_split_process(s, c, &i, &start);
		if (start < i)
		{
			to_return[j++] = ft_substr(s, (size_t)start, (size_t)(i - start));
			if (!to_return[j - 1])
				return (ft_free_split(to_return));
		}
	}
	to_return[j] = NULL;
	return (to_return);
}
