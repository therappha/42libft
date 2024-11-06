/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:57:12 by rafaelfe          #+#    #+#             */
/*   Updated: 2024/10/18 18:57:12 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}
// #include "tests.h"
// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *result = ft_strchr(str, 'X');
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 		printf("NOT FOUND");
// }
