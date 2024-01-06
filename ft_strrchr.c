/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 23:22:21 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 01:22:46 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns a pointer to the last occurrence of the character c in the string s.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == (unsigned char) c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str;
// 	int			i;
//
// 	str = "Hello world";
// 	i = '\0';
// 	char *result=ft_strrchr(str, i);
// 	if (result != NULL) 
//     	printf("%s\n", result);
// 	else
//     	printf("Character not found.\n");
// 	return (0);
// }
