/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 19:08:35 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 19:08:35 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(char *str, char c)
{
	int	last;
	int	i;

	i = 0;
	last = -1;
	while (str[i])
	{
		if (str[i] == c)
			last = i;
		i++;
	}
	if (last == -1)
		return (NULL);
	return (str += last);
}
