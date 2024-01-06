/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 02:08:34 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:34:56 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first occurrence of the null-terminated string little in the
//string big, where not more than len characters are searched.
//Characters that appear after a ‘\0’ character are not searched.
//Return Value: If little is an empty string, big is returned; 
//if little occurs nowhere in big, NULL is returned; 
//otherwise a pointer to the first character of the
//first occurrence of little is returned.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx_big;
	size_t	idx_little;

	idx_big = 0;
	if (*little == '\0')
		return ((char *)big);
	while ((big[idx_big]) && (idx_big < len))
	{
		idx_little = 0;
		if (big[idx_big] == little[idx_little])
		{
			while ((big[idx_big + idx_little] == little[idx_little])
				&& (idx_big + idx_little < len))
			{
				idx_little++;
				if (little[idx_little] == '\0' )
					return ((char *)(big + idx_big));
			}
		}
		idx_big++;
	}
	return (NULL);
}

// int main(void)
// {
// 	//Test case 1:
// 	const char *haystack = "aaxx";
// 	const char *needle = "";
// 	size_t search_len = 4;
// 	char *result = ft_strnstr(haystack, needle, search_len);
// 	if (needle[0] == '\0') 
// 		printf ("location big %p, location little %p,
//			 location result %p\n", haystack, needle, result);
// 	else if (result != NULL) 
// 		printf("Found '%s' at position %ld\n", needle, result - haystack);
// 	else 
// 		printf("'%s' not found in the string.\n", needle);

// 	//Test case 2:
// 	const char *haystack2 = "This is a simple test.";
// 	const char *needle2 = "is";
// 	size_t search_len2 = 10;  // Exceeds the length of haystack
// 	char *result2 = ft_strnstr(haystack2, needle2, search_len2);
// 	if (needle2[0] == '\0') 
// 		printf ("location big %p, location little %p,
//		 location result %p\n", haystack2, needle2, result2);
// 	else if (result2 != NULL) 
// 		printf("Found '%s' at position %ld\n", needle2, result2 - haystack2);
// 	else
// 		printf("'%s' not found in the string.\n", needle2);
//
// 	return 0;
// }
