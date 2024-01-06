/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:10:01 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 03:05:06 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a substring from the string ’s’.
//The substring begins at index ’start’ and is of maximum size ’len’.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	to_allocate;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (len_s == 0 || start > (unsigned int)len_s)
	{
		to_allocate = 0;
		start = 0;
	}
	else
	{
		if (len_s - (size_t)start >= len)
			to_allocate = len;
		else
			to_allocate = len_s - (size_t)start;
	}
	sub_str = (char *)malloc(to_allocate + 1);
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, to_allocate + 1);
	return (sub_str);
}

// 	int	main(void)
// {
// 	//Test Case 1:
// 	const char *src1 = "Hello, World!";
// 	char *sub1 = ft_substr(src1, 7, 5);
// 	if (sub1)
// 	{
// 		printf("Sub1: %s\n", sub1);
// 		free(sub1);
// 	}
//
// 	// Test Case 2:
// 	const char *src2 = "Good morning!";
// 	char *sub2 = ft_substr(src2, 0, 4);
// 	if (sub2)
// 	{
// 		printf("Sub2: %s\n", sub2);
// 		free(sub2);
// 	}
//
// 	// Test Case 3:
// 	const char *src3 = "Testing";
// 	char *sub3 = ft_substr(src3, 3, 10);
// 	if (sub3)
// 	{
// 		printf("Sub3: %s\n", sub3); // Should print "ting"
// 		free(sub3);
// 	}
//
// 	// Test Case 4: Extract an empty substring.
// 	const char *src4 = "Example";
// 	char *sub4 = ft_substr(src4, 2, 0);
// 	if (sub4)
// 	{
// 		printf("Sub4: %s\n", sub4);
// 		free(sub4);
// 	}
//	
// 	//Test Case 5: String is empty
// 	const char *src5 = "";
// 	char *sub5 = ft_substr(src5, 2, 3);
// 	if (sub5)
// 	{
// 		printf("Sub5: %s\n", sub5);
// 		free (sub5);
// 	}
//	
// 	//Test case 6:
// 	const char *src6 = "hola";
// 	char *sub6 = ft_substr(src6, 0, -1);
// 	if (sub6)
// 	{
// 		printf("Sub6: %s\n", sub6);
// 		free (sub6);
// 	}
//
// 	//Test case 7:
// 	const char *src7 = "hola";
// 	char *sub7 = ft_substr(src7, 0, 0);
// 	if (sub7)
// 	{
// 		printf("Sub7: %s\n", sub7);
// 		free (sub7);
// 	}
//
// 	//Test case 8:
// 	const char *src8 = "Can all ducks quack?";
// 	char *sub8 = ft_substr(src8, (unsigned int)42949672950, 0);
// 	if (sub8)
// 	{
// 		printf("Sub8: %s\n", sub8);
// 		free (sub7);
// 	}
// 	return (0);
// }