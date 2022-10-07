/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/10/08 00:03:25 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	else if (lst && del)
	{
		del(lst -> content);
		free (lst);
	}
	lst = NULL;
}

// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	t_list	*list_node;

// 	list_node = ft_lstnew(content_node);
// 	printf("content of lst before_del
//	is %s \n", (char *)(list_node) -> content);
// 	ft_lstdelone(list_node, del);
// 	printf("content of lst after_del
//	is %s \n", (char *)list_node -> content);
// 	return (0);
// }
