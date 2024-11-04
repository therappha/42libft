/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:42:30 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/04 19:22:09 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (!newlist)
		return (NULL);
	newlist -> content = content;
	newlist -> next = NULL;
	return (newlist);
}
int	main(void)
{
	t_list *first = ft_lstnew(1);
	t_list *second = ft_lstnew(2);
	t_list *third = ft_lstnew(3);
	t_list *fourth = ft_lstnew(4);
	t_list *temp = first;

	first -> next = second;
	second -> next = third;
	third -> next = fourth;
	printf("%s", (int)(temp -> content));
	while(temp)
	{
		printf("% d", (int)(temp -> content));
		temp = temp -> next;
	}
}
