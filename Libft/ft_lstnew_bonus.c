/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 18:05:33 by aarponen          #+#    #+#             */
/*   Updated: 2023/11/30 12:00:49 by aarponen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new node.
// The member variable ’content’ is initialized with
// the value of the parameter ’content’. The variable
// ’next’ is initialized to NULL

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main(void)
{

	int content1 = 42;
	t_list *node1 = ft_lstnew(&content1);
	char content2[] = "Berlin";
	t_list *node2 = ft_lstnew(content2);

	printf("%d\n", *(int *)node1->content);
	printf("%s\n", (char *)node2->content);
	free (node1);
	free (node2);
	return (0);
}*/
