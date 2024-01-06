/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:49:16 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 02:33:50 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Calculates the length of the string pointed to by s,
//excluding the terminating null byte ('\0').

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s + len))
		len++;
	return (len);
}
// int main (void)
// {	
// 	char *str = "Hello";
// 	size_t i;
// 	i=ft_strlen(str);
// 	printf("ft string length %ld\n", i);
// 	i=strlen(str);
// 	printf("string length %ld\n", i);
// 	return 0;
// }	
