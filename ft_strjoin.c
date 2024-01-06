/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:44:59 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 03:10:06 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a new string,
//which is the result of the concatenation of ’s1’ and ’s2’.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc(s1_len + s2_len + 1);
	if (dest)
	{
		ft_memcpy(dest, s1, s1_len);
		ft_memcpy(dest + s1_len, s2, s2_len + 1);
	}
	return (dest);
}
// int main (void)
// {
// 	// Test case 1: Join two non-empty strings.
// 	char *result1 = ft_strjoin("Hello", ", world!");
// 	printf("Result 1: %s\n", result1); // Expected output: "Hello, world!"
//
// 	// Test case 2: Join an empty string with a non-empty string.
// 	char *result2 = ft_strjoin("", "Concatenate me.");
// 	printf("Result 2: %s\n", result2); // Expected output: "Concatenate me."
//
// 	// Test case 3: Join a non-empty string with an empty string.
// 	char *result3 = ft_strjoin("Start with me. ", "");
// 	printf("Result 3: %s\n", result3); // Expected output: "Start with me."
//
// 	// Test case 4: Join two empty strings.
// 	char *result4 = ft_strjoin("", "");
// 	printf("Result 4: %s\n", result4); // Expected output: ""
//
// 	// Test case 5: Join a very long string with a short one.
// 	char *result5 = ft_strjoin(
// 		"This is a very long string. ", "Short string.");
// 	printf("Result 5: %s\n", result5);
// 	// Expected output: "This is a very long string. Short string."
//
// 	free(result1);
// 	free(result2);
// 	free(result3);
// 	free(result4);
// 	free(result5);
// 	return 0;
// }	
