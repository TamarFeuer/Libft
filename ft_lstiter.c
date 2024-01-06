/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 02:09:31 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 12:25:51 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Iterates the list ’lst’ and applies the function ’f’ on the content of
//each node.

#include "libft.h"

// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node.

// static void ft_print (void *content)
// {
// 	if (content)
// 		printf ("%s in line\n", (char*)content);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	ptr = lst;
	while (ptr && f)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
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
// 	ft_lstiter(node1, ft_print);
//	
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	free(node4);
// 	return 0;
// }