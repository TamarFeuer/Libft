/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 01:57:05 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 03:56:08 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the integer ’n’ to the given file descriptor.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		c = n % 10 + 48;
		write(fd, &c, 1);
	}
}
// int main(void)
// {
// 	ft_putnbr_fd(-234, 1);
// 	printf("\n");
//	
// 	ft_putnbr_fd(-2147483648, 1);
// 	printf("\n");
//
// 	return 0;
// }