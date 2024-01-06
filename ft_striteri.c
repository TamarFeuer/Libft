/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:22:14 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 03:33:46 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies the function ’f’ on each character of
//the string passed as argument, passing its index
//as first argument. Each character is passed by
//address to ’f’ to be modified if necessary.

#include "libft.h"

// static void print_indexed_char(unsigned int index, char *c)
// {
// 	printf("Index: %u, Character: %c\n", index, *c);
// }	

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int main (void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "";
// 	char str3[] = "12345";

// 	printf("Test Case 1:\n");
// 	ft_striteri(str1, &print_indexed_char);
// 	printf("\n");

// 	printf("Test Case 2:\n");
// 	ft_striteri(str2, &print_indexed_char);
// 	printf("\n");

// 	printf("Test Case 3:\n");
// 	ft_striteri(str3, &print_indexed_char);
// 	printf("\n");
// 	return 0;
// }
