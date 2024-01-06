/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:57:20 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:24:03 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks for a digit (0 through 9).
//The values returned are nonzero if the character c falls into the tested
//class, and zero if not.

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
// int main(void)
// {	
// 	int i, c;
// 	i=ft_isdigit(c);
// 	printf("ft is digit %d\n", i);
// 	i=isdigit(c);
// 	printf("is digit %d\n", i);
// 	return 0;
// }
