/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 02:31:46 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:33:53 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a string
//representing the integer received as an argument.
//Negative numbers must be handled.

#include "libft.h"

static int	ft_length(long long_n)
{
	int	digits;

	digits = 0;
	if (long_n < 0)
	{
		digits++;
		long_n = -long_n;
	}
	while (long_n > 0)
	{
		digits++;
		long_n /= 10;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*str;
	long	long_n;

	long_n = n;
	if (long_n == 0)
		return (ft_strdup("0"));
	digits = ft_length(long_n);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (long_n < 0)
	{
		str[0] = '-';
		long_n = -long_n;
	}
	str[digits--] = '\0';
	while (long_n > 0)
	{
		str[digits] = (long_n % 10) + '0';
		long_n /= 10;
		digits--;
	}
	return (str);
}

// int main(void)
// {
	//char *str1 = ft_itoa(-2147483648);
	//printf("%s \n", str1);
	//
	//char *str2 = ft_itoa(0);
	//printf("%s \n", str21);
	//
	//char *str3 = ft_itoa(-345);
	//printf("%s \n", str3);
	//
	//char *str4 = ft_itoa(26031970);
	//printf("%s \n", str4);
	//return 0;
// }