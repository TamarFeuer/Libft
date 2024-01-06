/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:29:55 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:24:16 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks for any printable character including space.
//The values returned are nonzero if the character c falls into the tested
//class, and zero if not.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
// int main (void)
// {
// 	int i, c;
// 	i=ft_isprint(c);
// 	printf("ft is print %d\n", i);
// 	i=isprint(c);
// 	printf("is print %d\n", i);
// 	return 0;
// }