/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 02:11:44 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:34:09 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//utputs the string ’s’ to the given file descriptor followed by a newline.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main(void)
// {
// 	ft_putendl_fd ("I like strings", 1);
// 	return 0;
// }