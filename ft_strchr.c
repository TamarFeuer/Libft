/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:14:29 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 01:23:50 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns a pointer to the first occurrence of the character c in the string s.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && (*(s + i)) != (unsigned char)c)
		i++;
	if (*(s + i) == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str;
// 	int			i;
//
// 	str = "Hello";
// 	i = '\0';
// 	char *result=ft_strchr(str, i);
// 	if (result != NULL) 
// 		printf("%s\n", result);
// 	else
// 		printf("Character not found.\n");
// 	return (0);
// }
