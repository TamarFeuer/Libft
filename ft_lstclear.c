/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:56:44 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 02:14:57 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free.
// Finally, the pointer to the list must be set to
// NULL.

#include "libft.h"

// static void del(void *content)
// {
// 	if (content)
// 		content = NULL;
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next_node;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next_node = current->next;
		del(current->content);
		free(current);
		current = next_node;
	}
	*lst = NULL;
}

// int main(void)
// {
// 	t_list		*node1;
// 	t_list		*node2;
// 	t_list		*node3;
// 	t_list		*node4;
// 	t_list		*ptr;
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
// 	printf ("Before, pointer points to %p ", ptr);
// 	i = ft_lstsize(ptr);
// 	printf ("and size of list is %d\n",i); //4
//
// 	ft_lstclear(&ptr, del);
//
// 	printf ("After, pointer points to %p ", ptr);
// 	i = ft_lstsize(ptr);
// 	printf ("and size of list is %d\n",i); //0
//
// 	return 0;
// }