/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:22:26 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:15:48 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenate strings. Designed to be safer, more consistent, and less error
//prone replacement for strncat. Unlike this function, strlcat() takes the full
// size of the buffer (not just the length) and guarantees to NUL-terminate the
//result (as long as size is larger than 0 or as long as there is at least one
//byte free in dst).Note that a byte for the NUL should be included in size.
//Also note that strlcat() only operates on true “C” strings.
//This means that both src and dst must be NUL-terminated.

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	i;

	dest_size = ft_strlen(dest);
	i = 0;
	if (size <= dest_size)
		return (size + ft_strlen(src));
	while (src[i] && dest_size + i < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (ft_strlen(src) + dest_size);
}
// int main(void)
// {
// 	char first[] = "This is ";
// 	char last[] = "a potentially long string";
// 	int r1, r2;
// 	int size1, size2;
// 	size1 = 16;
// 	char buffer1[size1];
// 	strcpy(buffer1,first);
// 	r1 = ft_strlcat(buffer1,last,size1);
// 	printf("Dest: |%s| length:8\n", first);
// 	printf("Src: |%s| length 25\n", last);
// 	printf ("Size is %d\n", size1);
// 	printf("%s\n",buffer1);
// 	printf("Value returned: %d\n",r1);

// 	size2 = 5;
// 	char buffer2[size2];
// 	strcpy(buffer2,first);
// 	r2 = ft_strlcat(buffer2,last,size2);
// 	printf("Dest: |%s| length:8\n", first);
// 	printf("Src: |%s| length 25\n", last);
// 	printf ("Size is %d\n", size2);
// 	printf("%s\n",buffer2);
// 	printf("Value returned: %d\n",r2);
// 	return 0;
// }