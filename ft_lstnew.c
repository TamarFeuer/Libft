/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:21:04 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 02:18:00 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc (sizeof(t_list));
	if (!new_node)
		return (NULL);
	else
	{
		new_node->content = content;
		new_node->next = NULL;
	}
	return (new_node);
}
// int main(void)
// {
// 	t_list	*ptr;
// 	ptr = ft_lstnew ("I am new");
//
// 	printf ("content: %s\n", (char*)(*ptr).content);
// 	printf ("next: %p\n", (*ptr).next);
// 	return 0;
// }
