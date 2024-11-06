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

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	last;
	int	i;

	i = 0;
	last = -1;
	while (str[i])
	{
		if (str[i] == (char)c)
			last = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(str + i));
	if (last == -1)
		return (NULL);
	return ((char *)(str + last));
}
#include "tests.h"
// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *result = ft_strrchr(str, 'o');
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("NOT FOUND");
// }
