/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:08:13 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/07 19:43:33 by rafaelfe         ###   ########.fr       */
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

// void ft_swapcase(char *str)
// {
// 	while(*str)
// 	{
// 		if (*str >= 'a' && *str <= 'z')
// 		 *str -= 32;
// 		else if (*str >= 'A' && *str <= 'Z')
// 			*str += 32;
// 		str++;
// 	}
// }
// int	main(void)
// {
// 	t_list *first = ft_lstnew(ft_strdup("aaaaaaaa"));
// 	t_list *second = ft_lstnew(ft_strdup("aaaaaaaa"));
// 	t_list *third = ft_lstnew(ft_strdup("aaaaaaaa"));
// 	t_list *fourth = ft_lstnew(ft_strdup("aaaaaaaa"));
// 	t_list *temp = first;

// 	first -> next = second;
// 	second -> next = third;
// 	third -> next = fourth;
// 	printf("%d\n", ft_lstsize(temp));
// 	while(temp)
// 	{
// 		printf("%s\n", (temp -> content));
// 		temp = temp -> next;
// 	}
// 	temp = first;
// 	ft_lstiter(temp, &ft_swapcase);
// 	printf("%d\n", ft_lstsize(temp));
// 	while(temp)
// 	{
// 		printf("%s\n", (temp -> content));
// 		temp = temp -> next;
// 	}
// }
