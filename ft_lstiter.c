/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:08:13 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/07 17:42:51 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
// #include "tests.h"
// int	main(void)
// {
// 	t_list *first = ft_lstnew(ft_strdup(~));
// 	t_list *second = ft_lstnew(2);
// 	t_list *third = ft_lstnew(3);
// 	t_list *fourth = ft_lstnew(4);
// 	t_list *temp = first;

// 	first -> next = second;
// 	second -> next = third;
// 	third -> next = fourth;
// 	printf("%d", ft_lstsize(temp));
// }
