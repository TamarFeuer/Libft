/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:47:19 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 01:56:16 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies n bytes from memory area src to memory area dest.
//The memory areas must not overlap.
//Returns a pointer to dest.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_cpy;
	const char	*src_cpy;

	dest_cpy = dest;
	src_cpy = src;
	if (!dest && !src)
		return (dest);
	while (n > 0)
	{
		*dest_cpy = *src_cpy;
		dest_cpy++;
		src_cpy++;
		n--;
	}
	return (dest);
}
// int main (void)
// {
// 	const char src[] = "2";
// 	char dest[]="12";
// 	printf("Before memcpy dest: %s\n", dest);
// 	ft_memcpy(dest, src, 2);
// 	printf("After memcpy dest: %s\n", dest);
// return 0;
// }
