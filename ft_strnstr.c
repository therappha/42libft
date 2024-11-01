/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:07:57 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/11/01 18:22:05 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i] && little[j] && i < len)
		{
			i++;
			j++;
		}
		if (!little[j])
			return ((char *)big + i - j);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	printf("%s", ft_strnstr("abcdefgh", "abc", 2));
// }
