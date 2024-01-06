/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:05:26 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:32:02 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks for an alphanumeric character; it is equivalent to
//(isalpha(c) || isdigit(c)). The values returned are nonzero if the character c
//falls into the tested class, and zero if not.

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha (c) || ft_isdigit(c))
		return (8);
	else
		return (0);
}
// int main (void)
// {
// 	int i, c;
// 	i=ft_isalnum(c);
// 	printf("ft is alnum %d\n", i);
// 	i=isalnum(c);
// 	printf("is alnum %d\n", i);
// return 0;
// }