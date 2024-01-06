/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:11:35 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:21:51 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Erases the data in the n bytes of the memory starting at the location pointed
// to by s, by writing zeros (bytes containing '\0') to that area.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = '\0';
		copy++;
		n--;
	}
}
// int main(void)
// {
// 	char str[] = "encyclopedia";
// 	bzero(str ,3);
// 	printf ("%c %c %c %c %c %c\n",
//	*(str), *(str+1), *(str+2), *(str+3), *(str+4), *(str+5));
// 	return 0;
// }	