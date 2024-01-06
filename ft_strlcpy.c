/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 01:28:50 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:20:11 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies strings. It is designed to be safer, more consistent, and less error
//prone replacements for strncpy. Unlike this function, strlcpy() takes the full
//size of the buffer (not just the length) and guarantees to NUL-terminate the
//result (as long as size is larger than 0).Note that a byte for the NUL should
//be included in size. Also note that strlcpy() only operates on true “C”
//strings.This means that src must be NUL-terminated.

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while ((i < size - 1) && *(src + i))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		*(dest + i) = '\0';
	}
	return (ft_strlen(src));
}
// int main(void)
// {
// 	// Test 1: Copy a short string to a larger destination
// 	char dest1[20];
// 	const char *src1 = "Hello";
// 	size_t result1 = ft_strlcpy(dest1, src1, sizeof(dest1));
// 	printf("Test 1: Copied: \"%s\", Length: %zu\n", dest1, result1);

// 	// Test 2: Copy a long string to a smaller destination (should truncate)
// 	char dest2[5];
// 	const char *src2 = "This is a long string";
// 	size_t result2 = ft_strlcpy(dest2, src2, sizeof(dest2));
// 	printf("Test 2: Copied: \"%s\", Length: %zu\n", dest2, result2);

// 	// Test 3: Empty source string (should copy nothing)
// 	char dest3[10];
// 	const char *src3 = "";
// 	size_t result3 = ft_strlcpy(dest3, src3, sizeof(dest3));
// 	printf("Test 3: Copied: \"%s\", Length: %zu\n", dest3, result3);
// 	return 0;
// }