/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/09/21 22:21:20 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*ret_lst;
	t_list	*p_lst;

	ret_lst = NULL;
	p_lst = lst;
	if (!p_lst || !f || !del)
		return (NULL);
	while (p_lst)
	{
		new_node = ft_lstnew(f(p_lst -> content));
		if (!new_node)
		{
			ft_lstclear(&p_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&ret_lst, new_node);
		p_lst = p_lst -> next;
	}
	return (ret_lst);
}

// static void	f(void *content)
// {
// 	printf("content is %s \n",(char *) content);
// }

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_new_node_1 = "efgh";
// 	char 	*content_new_node_2 = "ijklm";
// 	t_list	*list_node;
// 	t_list	*list_new_node1;
// 	t_list	*list_new_node2;
// 	t_list	**list;

// 	list = &list_node;
// 	list_node = ft_lstnew(content_node);
// 	printf("content of lst is %s \n", (char *)(*list) -> content);
// 	list_new_node1 = ft_lstnew(content_new_node_1);
// 	list_new_node2 = ft_lstnew(content_new_node_2);
// 	ft_lstadd_back(list, list_new_node1);
// 	printf("content of lst after_add_back1
// is %s \n", (char *)(*list) -> content);
// 	ft_lstadd_back(list, list_new_node2);
// 	printf("content of lst after_add_back2
// is %s \n", (char *)(*list) -> content);
// 	ft_lstiter(*list, f);
// 	return (0);
// }
