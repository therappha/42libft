/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:58:29 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/06 17:58:29 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include "tests.h"
// int	main(void)
// {
// 	t_list *first = ft_lstnew(1);
// 	t_list *second = ft_lstnew(2);
// 	t_list *third = ft_lstnew(3);
// 	t_list *fourth = ft_lstnew(4);
// 	t_list *addfront = ft_lstnew(5);
// 	t_list *temp = first;

// 	first -> next = second;
// 	second -> next = third;
// 	third -> next = fourth;
// 	ft_lstadd_front(&temp, addfront);
// 	while(temp)
// 	{
// 		printf("% d", (int)(temp -> content));
// 		temp = temp -> next;
// 	}
// }
