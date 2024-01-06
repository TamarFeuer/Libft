/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 04:10:42 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:35:17 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.

#include "libft.h"

	// static void *ft_custom_mapping(void *content)
	// {
	// 	if (content)
	// 	{
	// 	// Create a new string by adding "Custom " before the original content
	// 	char *new_content = (char *)malloc(strlen((char *)content) + 8);
	// 	if (!new_content)
	// 	return NULL;
	// 	strcpy(new_content, "Custom ");
	// 	strcat(new_content, (char *)content);
	// 	return new_content;
	// 	}
	// 	return NULL;
	// }
	//
	// static void del(void *content)
	// {
	// 	if (content)
	// 	content = NULL;
	// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || (!(*lst).content && !(*lst).next))
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	if (!new_list)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// int main (void)
// {
// 	t_list		*node1;
// 	t_list		*node2;
// 	t_list		*node3;
// 	t_list		*node4;
// 	t_list		*ptr;
// 	t_list		*new_lst;
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
// 	new_lst = ft_lstmap(ptr, ft_custom_mapping, del);
//
// 	// Print the new list
// 	while (new_lst)
// 	{
// 	printf("%s\n", (char *)new_lst->content);
// 		new_lst = new_lst->next;
// 	}
//
// 	// Free the new list
// 	while (new_lst) {
// 	t_list *next = new_lst->next;
// 		free(new_lst);
// 		new_lst = next;
// 	}
//
// 	// Free the original list
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	free(node4);
// }
