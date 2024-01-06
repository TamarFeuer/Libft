/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:46:04 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:29:56 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns a pointer to a new string which is a duplicate of the string s.
//Memory for the new string is obtained with malloc, and can be freed with free.

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*duplicate;
	size_t	src_len;

	src_len = ft_strlen(src);
	duplicate = (char *)(malloc (src_len + 1));
	if (duplicate == NULL)
		return (NULL);
	ft_memcpy (duplicate, src, src_len);
	duplicate [src_len] = '\0';
	return (duplicate);
}
// int main(void)
// {
// 	// Test Case 1: Duplicate a non-empty string.
// 	const char *src1 = "Hello, World!";
// 	char *dup1 = ft_strdup(src1);
// 	if (dup1)
// 	{
// 		printf("Duplicate 1: %s\n", dup1);
// 		free(dup1);
// 	}

// 	// Test Case 2: Duplicate an empty string.
// 	const char *src2 = "";
// 	char *dup2 = ft_strdup(src2);
// 	if (dup2)
// 	{
// 		printf("Duplicate 2: %s\n", dup2);
// 		free(dup2);
// 	}
// 	return 0;
// }