/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:46:54 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:23:18 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks for an alphabetic character.
//The values returned are nonzero if the character c falls into the tested
//class, and zero if not.

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	else
		return (0);
}
//{
//	int i, c;
//
//	i= ft_isalpha(c);
//	printf("ft is alpha %d\n", i);
//	
//	i=isalpha(c);
//	printf("is alpha %d\n", i);
//	return 0;
//}
