/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:59:52 by tfeuer            #+#    #+#             */
/*   Updated: 2023/10/21 14:59:52 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Fills the first n bytes of the memory area pointed to by s with the constant
//byte c. Returns a pointer to the memory area s.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = (unsigned char)c;
		copy++;
		n--;
	}
	return (s);
}

// int main(void)
// {
// 	char str1[] = "Hello World!";
// 	ft_memset(str1, 'A', 5);
// 	printf ("str1 was Hello World! and now is %s\n", str1);
// return 0;
// }
