/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:37:04 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 03:12:37 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a copy of ’s1’
//with the characters specified in ’set’ removedfrom the beginning
//and the end of the string.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	trim_start;
	size_t	trimmed_len;

	if (!s1 || !set)
		return (NULL);
	trim_start = 0;
	while (s1[trim_start] && ft_strchr(set, s1[trim_start]))
		trim_start++;
	trimmed_len = ft_strlen(s1) - trim_start;
	while (trimmed_len > 0 && ft_strchr(set, s1[trim_start + trimmed_len - 1]))
		trimmed_len--;
	dest = ft_substr(s1, trim_start, trimmed_len);
	return (dest);
}
// int main(void)
// {
// 	char *trim;
// 	trim = ft_strtrim("acbd2 ca", "ab");
// 	printf ("The sting trimmed is |%s|\n", trim);
// 	trim = ft_strtrim("acbd2 ca", "ac");
// 	printf ("The sting trimmed is |%s|\n", trim);
// 	trim = ft_strtrim("Hello all Hello", "Hel");
// 	printf ("The sring trimmed is |%s|\n", trim);
// 	trim = ft_strtrim("Hello all Hello", "lo");
// 	printf ("The sring trimmed is |%s|\n", trim);
// 	trim = ft_strtrim("ss", "");
// 	printf ("The sting trimmed is |%s|\n", trim);
// 	return 0;
// }