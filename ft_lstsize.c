/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfeuer <tfeuer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:21:57 by tfeuer            #+#    #+#             */
/*   Updated: 2023/11/05 02:16:26 by tfeuer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Counts the number of nodes in a list.

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr;

	if (!lst)
		return (0);
	ptr = lst;
	i = 1;
	while (ptr->next)
	{
		i += 1;
		ptr = ptr->next;
	}
	return (i);
}

// int main(void)
// {
// 	t_list		*node1;
// 	t_list		*node2;
// 	t_list		*node3;
// 	t_list		*node4;
// 	t_list		*ptr;
// 	int		i;
//
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	node4 = (t_list *)malloc(sizeof(t_list));
// 	if (!node1 || !node2 || !node3 ||!node4)
// 		return (1);
//
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;
//
// 	ptr = node1;
// 	i = ft_lstsize(ptr);
// 	printf ("Size is %d\n",i); //4
// 	ptr = ptr->next;
// 	i = ft_lstsize(ptr); 
// 	printf ("Size is %d\n",i); //3
// 	ptr = ptr->next;
// 	i = ft_lstsize(ptr); 
// 	printf ("Size is %d\n",i); //2
// 	ptr = ptr->next;
// 	i = ft_lstsize(ptr); 
// 	printf ("Size is %d\n",i); //1
// 	ptr = ptr->next;
// 	i = ft_lstsize(ptr); 
// 	printf ("Size is %d\n",i); //0
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	free(node4);
// 	return 0;
// }
