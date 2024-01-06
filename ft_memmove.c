/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:13:40 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:35:38 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies n bytes from memory area src to memory area dest.
//The memory areas may overlap: copying takes place as though the bytes
//in src are first copied into a temporary array that does not overlap src or
//dest, and the bytes are then copied from the temporary array to dest.
//Returns a pointer to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_cpy;
	const char	*src_cpy;

	dest_cpy = dest;
	src_cpy = src;
	if (!dest && !src)
		return (dest);
	if (dest_cpy > src_cpy)
	{
		dest_cpy += n;
		src_cpy += n;
		while (n > 0)
		{
			dest_cpy--;
			src_cpy--;
			*dest_cpy = *src_cpy;
			n--;
		}
	}
	else
		while (n-- > 0)
			*dest_cpy++ = *src_cpy++;
	return (dest);
}
// int main(void)
// {
// 	char cpy_string[] = "0123456789";
// 	ft_memcpy(cpy_string + 5, cpy_string+3, 5);
// 	printf("After ft_memcpy: %s\n", cpy_string); 
//
// 	char move_string[] = "0123456789";
// 	ft_memmove(move_string + 5, move_string+3, 5);
// 	printf("After ft_memmove: %s\n", move_string);
// return 0;
// }
