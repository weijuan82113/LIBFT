/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchen <wchen@42studen>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:39:10 by wchen             #+#    #+#             */
/*   Updated: 2022/09/21 22:01:52 by wchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tem_lst;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		tem_lst = ft_lstlast(*lst);
		tem_lst -> next = new;
	}
}
// #include <stdio.h>

// int main (void)
// {
// 	char 	*content_node = "abcd";
// 	char 	*content_front_node = "efgh";
// 	char 	*content_back_node = "ijkl";
// 	t_list	*new_node_front;
// 	t_list	*new_node_back;
// 	t_list	*list_node;
// 	t_list	**lst;
// 	t_list	*list_last;
// 	//char	*str;

// 	lst = &list_node;
// 	new_node_front = ft_lstnew(content_front_node);
// 	new_node_back = ft_lstnew(content_back_node);
// 	list_node = ft_lstnew(content_node);
// 	ft_lstadd_front(lst, new_node_front);
// 	printf("content of last 1 is %s \n", (char *)(*lst) -> content);
// 	ft_lstadd_back(lst, new_node_back);
// 	printf("content of last 2 is %s \n", (char *)(*lst) -> next -> content);
// 	list_last = ft_lstlast(*lst);
// 	//str = (char *)list_last -> content;
// 	printf("content of last is %s \n", (char *)list_last -> content);
// 	return (0);
// }
