/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:30:52 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/06 18:30:52 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp -> next = new;

}
// 	new -> next = NULL; ??????
//  #include "tests.h"
// int	main(void)
// {
// 	t_list *first = ft_lstnew(1);
// 	t_list *second = ft_lstnew(2);
// 	t_list *third = ft_lstnew(3);
// 	t_list *fourth = ft_lstnew(4);
// 	t_list *temp = first;

// 	ft_lstadd_back(&first, second);
// 	ft_lstadd_back(&second, third);
// 	ft_lstadd_back(&third, fourth);
// 	while(temp)
// 	{
// 		printf("% d", (int)(temp -> content));
// 		temp = temp -> next;
// 	}
//  }
