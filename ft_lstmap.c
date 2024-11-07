/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:52:18 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/07 19:51:33 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*content;

	newlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst -> content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst -> next;
	}
	return (newlst);
}
// #include "tests.h"

// void *ft_swapcase(void *content)
// {
// 	char *str = (char *)content;
// 	char *new_str = ft_strdup(str);
// 	if (!new_str)
// 		return (NULL);

// 	char *ptr = new_str;
// 	while (*ptr)
// 	{
// 		if (*ptr >= 'a' && *ptr <= 'z')
// 			*ptr -= 32;
// 		else if (*ptr >= 'A' && *ptr <= 'Z')
// 			*ptr += 32;
// 		ptr++;
// 	}
// 	return (new_str);
// }
// static void del(void *content)
// {
// 	free(content);
// #include "tests.h"

// void *ft_swapcase(void *content)
// {
// 	char *str = (char *)content;
// 	char *new_str = ft_strdup(str);
// 	if (!new_str)
// 		return (NULL);

// 	char *ptr = new_str;
// 	while (*ptr)
// 	{
// 		if (*ptr >= 'a' && *ptr <= 'z')
// 			*ptr -= 32;
// 		else if (*ptr >= 'A' && *ptr <= 'Z')
// 			*ptr += 32;
// 		ptr++;
// 	}
// 	return (new_str);
// }
// static void del(void *content)
// {
// 	free(content);
// }
// int	main(void)
// {
// 	t_list *first = ft_lstnew(ft_strdup("aaaaaaaa"));
// 	t_list *second = ft_lstnew(ft_strdup("bbbbbbbb"));
// 	t_list *third = ft_lstnew(ft_strdup("cccccccc"));
// 	t_list *fourth = ft_lstnew(ft_strdup("dddddddd"));
// 	t_list *temp = first;
// 	t_list *newlist;
// 	first -> next = second;
// 	second -> next = third;
// 	third -> next = fourth;
// 	printf("%d\n", ft_lstsize(temp));
// 	while(temp)
// 	{
// 		printf("%s\n", (char *)(temp -> content));
// 		temp = temp -> next;
// 	}
// 	temp = first;
// 	newlist = ft_lstmap(temp, &ft_swapcase, del);
// 	printf("%d\n", ft_lstsize(newlist));
// 	while(newlist)
// 	{
// 		printf("%s\n", (char *)(newlist -> content));
// 		newlist = newlist -> next;
// 	}
// 	ft_lstclear(&temp, del);
// 	ft_lstclear(&newlist, del);
//  }
