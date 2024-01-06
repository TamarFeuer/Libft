/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:01:43 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 01:29:12 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//If c is a lowercase letter, toupper() returns its uppercase equivalent.
//Otherwise, it returns c.
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// int main(void)
// {
// 	ch = 'v';
// 	printf("Uppercase: %c\n",ft_toupper(ch));
// 	printf("Lowercase: %c\n",ft_tolower(ch));
// 	return 0;
// }
