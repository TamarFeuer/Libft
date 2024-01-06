/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:50:14 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 18:00:34 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates memory for an array of nmemb elements of size bytes each 
//and returns a pointer to the allocated memory. The memory is set to zero.
//If nmemb or size is 0, then calloc() returns either NULL, 
//or a unique pointer value that can later be successfully passed to free().
//If the multiplication of nmemb and size would result in integer overflow, 
//then calloc() returns an error.

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > (SIZE_MAX / size))
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (ptr)
		ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// int main (void)
// {
// 	int *intArray = (int *)ft_calloc(5, sizeof(int));
// 	if (intArray){
// 		for (int i = 0; i < 5; i++) 
// 		printf("intArray[%d] = %d\n", i, intArray[i]);
// 		free(intArray);
// 	}
//
// 	char *charArray = (char *)ft_calloc(8, sizeof(char));
// 	if (charArray){
// 		for (int i = 0; i < 8; i++)
// 			printf("charArray[%d] = '%c'\n", i, charArray[i]);
// 			free(charArray);
// 	}
//
// 	void *zeroSize = ft_calloc(0, 0);
// 		if (zeroSize){
// 			printf ("zeroSize= |%p|", zeroSize);
// 			free (zeroSize);
// 		}
// 	return 0;	
// }