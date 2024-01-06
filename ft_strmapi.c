/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:41:46 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:34:37 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies the function ’f’ to each character of the
//string ’s’, and passing its index as first argument
//to create a new string (with malloc) resulting
//from successive applications of ’f’.
//Returns NULL if the allocation fails.

#include "libft.h"

// static char transform(unsigned int i, char c) 
// {
// 	return c + 1;
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*res;

	i = 0;
	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
// int main(void)
// {
// 	char input[] = "Hello World";
// 	char *result;
//
// 	// Test case 1: Normal transformation
// 	result = ft_strmapi(input, &transform);
// 	printf("Test 1: Transformed string: %s\n", result);
// 	free(result);
//
// 	// Test case 2: NULL string and function
// 	result = ft_strmapi(NULL, &transform);
// 	if (result == NULL) {
// 		printf("Test 2: NULL string handled correctly.\n");
// 	}
//
// 	// Test case 3: Empty string
// 	result = ft_strmapi("", &transform);
// 	printf("Test 3: Empty string transformed: %s\n", result);
// 	free(result);
//
// 	return 0;
// }	
