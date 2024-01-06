/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:36:20 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 02:39:13 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts the initial portion of the string pointed to by str to int.
//Rrturns the converted value or 0 on error.

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((*(str + i) >= '\t' && *(str + i) <= '\r') || *(str + i) == ' ')
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			sign = -1;
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		result = result * 10 + (*(str + i) - '0');
		i++;
	}
	return (sign * result);
}

// int	main(void)
// {
// 	int	n;
// 	char str[] = "1";
//
// 	n = ft_atoi(str);
// 	printf("%d\n", n);
// 	n = atoi(str);
// 	printf("%d\n", n);
// 	return (0);
// }