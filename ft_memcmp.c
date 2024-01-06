/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:21:46 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:35:28 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compares the first n bytes (each interpreted as unsigned char) of the memory
//areas s1 and s2. Returns an integer less than, equal to, or greater than zero
//if the first n bytes of s1 is found, respectively, to be less than, to match,
//or be greater than the first n bytes of s2. For a nonzero return value, the
//sign is determined by the sign of the difference between the first pair of
//bytes (interpreted as unsigned  char) that differ in s1 and s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cpy_s1;
	const unsigned char	*cpy_s2;
	size_t				i;

	cpy_s1 = s1;
	cpy_s2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (*(cpy_s1 + i) == *(cpy_s2 + i) && (i < n - 1))
	{
		i++;
	}
	return (*(cpy_s1 + i) - *(cpy_s2 + i));
}
// int main(void)
// {	
// 	char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     char str3[] = "Hello, Duck!";
// 	// Test 1: Compare two equal strings
//     int result1 = ft_memcmp(str1, str2, 13);
//     int result1_std = memcmp(str1, str2, 13);
//     printf("Test 1: ft_memcmp result: %d, memcmp result: %d\n",
//		 result1, result1_std);
//
//     // Test 2: Compare two different strings
//     int result2 = ft_memcmp(str1, str3, 13);
//     int result2_std = memcmp(str1, str3, 13);
//     printf("Test 2: ft_memcmp result: %d,
//		 memcmp result: %d\n", result2, result2_std);
//
//     // Test 3: Compare up to a certain length
//     int result3 = ft_memcmp(str1, str3, 6);
//     int result3_std = memcmp(str1, str3, 6);
//     printf("Test 3: ft_memcmp result: %d,
//		 memcmp result: %d\n", result3, result3_std);
//
// 	// Test 4: Compare up to a certain length
// 	int arr1[] = {1, 2, 3, 4, 5};
// 	int arr2[] = {1, 2, 3, 4, 6};
// 	int result4 = ft_memcmp(arr1, arr2, sizeof(int) * 5);
// 	int result4_std = memcmp(arr1, arr2, sizeof(int) * 5);
// 	printf("Test 4: ft_memcmp result: %d,
//		 memcmp result: %d\n", result4, result4_std);
//	
// 	// Test 5: Compare up to a certain length
// 	unsigned char bin1[] = {0x01, 0x02, 0x03, 0x04};
// 	unsigned char bin2[] = {0x01, 0x02, 0x03, 0x23};
// 	int result5 = ft_memcmp(bin1, bin2, sizeof(unsigned char) * 4);
// 	int result5_std = memcmp(bin1, bin2, sizeof(unsigned char) * 4);
// 	printf("Test 5: ft_memcmp result: %d,
//		 memcmp result: %d\n", result4, result4_std);
//
// 	return 0;
// }	