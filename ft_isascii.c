/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:22:07 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:23:42 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks whether c is a 7-bit unsigned char value that fits into the ASCII
// character set. The values returned are nonzero if the character c falls into
//the tested class, and zero if not.

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	int i, c;
// 	i=ft_isascii(c);
// 	printf("ft is ascii %d\n", i);
// 	i=isascii(c);
// 	printf("is ascii %d\n", i);
// return 0;	
// }
