/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 23:45:19 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 03:55:06 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the character ’c’ to the given file descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main (void)
// {
// 	ft_putchar_fd('A', 1); //stdout
// 	ft_putchar_fd('E', 2); //stderr
//
// 	return 0;
// }