/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:11:18 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/06 18:11:18 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL) ;
	while(lst -> next)
		lst = lst -> next;
	return (lst);
}
// #include "tests.h"
// int	main(void)
// {
// 	t_list *first = ft_lstnew(1);
// 	t_list *second = ft_lstnew(2);
// 	t_list *third = ft_lstnew(3);
// 	t_list *fourth = ft_lstnew(4);
// 	t_list *temp = first;

// 	first -> next = second;
// 	second -> next = third;
// 	third -> next = fourth;
// 	temp = ft_lstlast(temp);
// 	printf("%d", (int)(temp -> content));
//  }
