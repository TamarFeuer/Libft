/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 01:13:36 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 16:50:12 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string ’s’ to the given file descriptor.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
// int main (void)
// {
// 	// Test case 1: Write a string to standard output (stdout).
// 	ft_putstr_fd("This is a test string for stdout.\n", 1);
//
// 	// Test case 2: Write a string to standard error (stderr).
// 	ft_putstr_fd("This is an error message for stderr.\n", 2);
// }