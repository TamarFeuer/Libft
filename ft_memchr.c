/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:48:16 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:26:42 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Scans the initial n bytes of the memory area pointed to by s for the first
//instance of c. Both c and the bytes of the memory area pointed to by s are
//interpreted as unsigned char. Returns a pointer to the matching byte or NULL
//if the character does not occur in the given memory area.

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pos;
	size_t				i;

	pos = s;
	i = 0;
	while (i < n)
	{
		if (*(pos + i) == (unsigned char)c)
			return ((void *)(pos + i));
		i++;
	}
	return (NULL);
}
// int main(void)
// {	
// 	const char *str9 = "Hello, World!";
// 	char character = 'W';
// 	// Test 1: Search for the character 'W' in the string
// 	void *result1 = ft_memchr(str9, (int)character, strlen(str9));
// 	if (result1 != NULL)
// 		printf("Test 1: Found 'W' at index %ld\n", (char *)result1 - str9);
// 	else
// 		printf("Test 1: 'W' not found in the string.\n");
//
// 	// Test 2: Search for the character 'x' in the string
// 	char character2 = 'x';
// 	void *result2 = ft_memchr(str9, (int)character2, strlen(str9));
// 	if (result2 != NULL)
// 		printf("Test 2: Found 'x' at index %ld\n", (char *)result2 - str9);
// 	else
// 		printf("Test 2: 'x' not found in the string.\n");
// return 0;
// }