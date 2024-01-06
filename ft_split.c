/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:53:52 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 03:13:44 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns an array
//of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter. The array must end
//with a NULL pointer.

#include "libft.h"

static int	is_delimiter(char c, char delimiter)
{
	return (c == delimiter);
}

static int	count_words(const char *s, char delimiter)
{
	int	count;
	int	is_inside_word;

	count = 0;
	is_inside_word = 0;
	while (*s)
	{
		if (is_delimiter(*s, delimiter))
		{
			is_inside_word = 0;
		}
		else if (!is_inside_word)
		{
			is_inside_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**substrings;
	int		sub_index;
	char	*sub_start;

	substrings = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!substrings)
		return (NULL);
	sub_index = 0;
	while (*s)
	{
		if (*s != c)
		{
			sub_start = (char *)s;
			while (*s && (*s != c))
				s++;
			substrings[sub_index] = ft_substr(sub_start, 0, s - sub_start);
			if (!substrings[sub_index])
				return (ft_free(substrings));
			sub_index++;
		}
		else
			s++;
	}
	substrings[sub_index] = NULL;
	return (substrings);
}

// int main(void)
// {
// 	char input[] = "hello!";
// 	char c = ' ';
// 	char **result;
// 	result = ft_split(input, c);
// 	if (!result)
// 	{
// 		printf("Memory allocation error or NULL result.\n");
// 	}
// 	else
// 	{
// 		int i = 0;
// 		while (result[i] != NULL) 
// 		{
// 			printf("Substring %d: |%s|\n", i, result[i]);
// 			free(result[i]);
// 			i++;
// 		}
// 		free(result);
// 	}
//  return 0;
// }
