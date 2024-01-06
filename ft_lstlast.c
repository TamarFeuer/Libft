/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:24:25 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 02:16:00 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = lst;
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}

// int main(void)
// {
// 	t_list		*node1;
// 	t_list		*node2;
// 	t_list		*node3;
// 	t_list		*node4;
// 	t_list		*ptr;
//
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	node4 = (t_list *)malloc(sizeof(t_list));
// 	if (!node1 || !node2 || !node3 ||!node4)
// 		return (1);
//
// 	(*node1).content = "I'm 1st";
// 	(*node2).content = "I'm 2nd";
// 	(*node3).content = "I'm 3rd";
// 	(*node4).content = "I'm 4th";
//
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;
//
// 	ptr = ft_lstlast (node1);
// 	printf ("Last content is: %s\n", (char*)ptr->content);
//
// 	free (node1);
// 	free (node2);
// 	free (node3);
// 	free (node4);
// 	return 0;
// }
