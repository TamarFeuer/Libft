/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:14:53 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 01:20:52 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares the two strings s1 and s2.
//The comparison is done using unsigned characters.
//Returns an integer indicating the result of the comparison, as follows:
//• 0, if the s1 and s2 are equal;
//• a negative value if s1 is less than s2;
//• a positive value if s1 is greater than s2.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) && (i < n - 1))
		i++;
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}

// int	main(void)
// {
// 		char	*str1;
// 		char	*str2;
// 		size_t	i;
//
// 		str1 = "123456789";
// 		str2 = "123406789";
// 		// str1 = "test\200";
// 		// str2 = "test\0";
// 		i = 5;
// 		printf ("%zu %zu\n",strlen(str1), strlen(str2));
// 		printf("%d\n", ft_strncmp(str1, str2, i));
// 		printf("%d\n", strncmp(str1, str2, i));
// 		return (0);
// }