/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:00:59 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 01:29:21 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If c is an uppercase letter, tolower() returns its lowercase equivalent.
//Otherwise, it returns c.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// int main(void)
// {
// 	ch = 'v';
// 	printf("Uppercase: %c\n",ft_toupper(ch));
// 	printf("Lowercase: %c\n",ft_tolower(ch));
// 	return 0;
// }