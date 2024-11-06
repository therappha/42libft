/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:20:11 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/06 17:57:46 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	list_size;

	list_size = 0;
	while (lst)
	{
		list_size++;
		lst = lst -> next;
	}
	return (list_size);
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
// 	printf("%d", ft_lstsize(temp));
// }
