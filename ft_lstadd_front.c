/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:19:44 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 02:16:40 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node ’new’ at the beginning of the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main(void)
// {
// 	t_list		*node1;
// 	t_list		*node2;
// 	t_list		*node3;
// 	t_list		*node4;
// 	t_list		*ptr, *temp;
// 	int			i;
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
// 	ptr = node1;
// 	i = ft_lstsize(ptr);
// 	printf ("Before: size is %d\n",i); 
//	
// 	ptr = ft_lstnew ("I am new");
// 	ft_lstadd_front(&node1, ptr);
// 	i = ft_lstsize(ptr);
// 	printf ("After: size is %d\n",i);
//
// 	while (ptr)
// 	{
// 		printf("%s\n", (char *)ptr->content);
// 		temp = ptr;
// 		ptr = ptr->next;
// 		free(temp);
// 	}
// 	return 0;
// }